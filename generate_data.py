from collections import defaultdict
import json
import xml.etree.ElementTree as ET
import argparse
from pathlib import Path
import sys
import re
from itertools import chain
import struct
import binascii


def intOrNone(val):
    try:
        return int(val)
    except ValueError:
        return None


def main():
    arg_parser = argparse.ArgumentParser(
        description="Generate instructions, enums, and docs for lsp.\n\nWorks best when using https://github.com/Ryex/StationeersStationpediaExtractor",
        epilog="Point at the Stationeers install and go!",
        formatter_class=argparse.ArgumentDefaultsHelpFormatter,
    )
    arg_parser.add_argument("path", help="Path to Stationeers installation")
    arg_parser.add_argument(
        "--lang", help="language to extract from (ie. english)", default="english"
    )
    args = arg_parser.parse_args()
    install_path = Path(args.path)
    if install_path.match("Stationeers/*.exe") or install_path.match(
        "Stationeers/rocketstation_Data"
    ):
        install_path = install_path.parent
    elif install_path.name == "Stationeers":
        pass
    elif (install_path / "Stationeers").is_dir():
        install_path = install_path / "Stationeers"

    data_path = install_path / "rocketstation_Data" / "StreamingAssets" / "Language"
    if not data_path.is_dir():

        print(
            f"Invalid install path. {install_path} does not point to a valid Stationeers installation"
        )
        arg_parser.print_help()
        sys.exit(1)

    lang = args.lang
    if not (data_path / f"{lang}.xml").is_file():
        print("Language file '{lang}.xml' does not exist. can not pull help strings.")
        sys.exit(2)

    extract_data(install_path, data_path, lang)


def extract_data(install_path, data_path: Path, language: str):
    tree = ET.parse(data_path / f"{language}.xml")
    root = tree.getroot()
    interface = root.find("Interface")
    strings = root.find("GameStrings")
    elms = [elm for elm in (interface, strings) if elm is not None]

    logic_type = re.compile(r"LogicType(\w+)")
    logic_slot_type = re.compile(r"LogicSlotType(\w+)")
    script_command = re.compile(r"ScriptCommand(\w+)")
    script_desc = re.compile(r"ScriptDescription(\w+)")

    enum_help = {}
    deprecated = set()
    logictypes = set()
    slotlogictypes = set()

    dep_path = Path("data") / "deprecated.txt"
    if dep_path.exists():
        with dep_path.open("r") as f:
            for line in f.readlines():
                name = line.strip()
                if name:
                    deprecated.add(name)

    logictypes_path = Path("data") / "logictypes.txt"
    if logictypes_path.exists():
        with logictypes_path.open("r") as f:
            for line in f.readlines():
                name = line.strip()
                if name:
                    logictypes.add(name)

    slotlogictypes_path = Path("data") / "slotlogictypes.txt"
    if slotlogictypes_path.exists():
        with slotlogictypes_path.open("r") as f:
            for line in f.readlines():
                name = line.strip()
                if name:
                    slotlogictypes.add(name)

    operations = set()
    for record in chain.from_iterable(elms):
        key = record.find("Key")
        value = record.find("Value")
        if key is None or value is None:
            continue
        key = key.text
        if key is None or value is None:
            continue
        if match := logic_type.match(key):
            if value.text.upper() == "DEPRECATED":
                deprecated.add(match.group(1))
            else:
                logictypes.add(match.group(1))
        if match := logic_slot_type.match(key):
            if value.text.upper() == "DEPRECATED":
                deprecated.add(match.group(1))
            else:
                slotlogictypes.add(match.group(1))
        if match := script_command.match(key):
            if not match.group(1).lower() == "command":
                operations.add(f"{match.group(1).lower()}")
        if match := script_desc.match(key):
            operations.add(f"{match.group(1).lower()}")

    op_path = Path("data") / "operations.txt"
    if op_path.exists():
        with op_path.open("r") as f:
            for line in f.readlines():
                name = line.strip()
                if name:
                    operations.add(name)

    enums: set[str] = set()
    enums_path = Path("data") / "enums.txt"
    if enums_path.exists():
        with enums_path.open("r") as f:
            for line in f.readlines():
                name = line.strip()
                if name:
                    enums.add(name)
    
    for name in enums:
        if name.removeprefix("LogicType.") in deprecated or name.removeprefix("LogicSlotType.") in deprecated:
            deprecated.add(name)

    batchmodes = set()
    batchmodes_path = Path("data") / "batchmodes.txt"
    if batchmodes_path.exists():
        with batchmodes_path.open("r") as f:
            for line in f.readlines():
                name = line.strip()
                if name:
                    batchmodes.add(name)

    reagentmodes = set()
    reagentmodes_path = Path("data") / "reagentmodes.txt"
    if reagentmodes_path.exists():
        with reagentmodes_path.open("r") as f:
            for line in f.readlines():
                name = line.strip()
                if name:
                    reagentmodes.add(name)

    for enum in (logictypes, slotlogictypes, batchmodes, reagentmodes, enums):
        to_remove = [name for name in enum if name in deprecated]
        for name in to_remove:
            enum.discard(name)

    enum_values_path = install_path / "Stationpedia" / "Enums.json"
    if enum_values_path.exists():
        with enum_values_path.open(mode="r") as f:
            enum_values = json.load(f)

            def update_enum(enum, values):
                for name in values:
                    if name not in enum:
                        enum.add(name)
                to_remove = []
                for name in enum:
                    if name not in values:
                        print("Removing", name)
                        to_remove.append(name)
                for name in to_remove:
                    enum.discard(name)

            update_enum(logictypes, enum_values["LogicType"])
            update_enum(slotlogictypes, enum_values["LogicSlotType"])
            update_enum(batchmodes, enum_values["LogicBatchMethod"])
            update_enum(reagentmodes, enum_values["LogicReagentMode"])
            update_enum(enums, enum_values["Enums"])

    op_path = Path("data") / "operations.txt"
    with op_path.open(mode="w") as f:
        for name in sorted(operations):
            f.write(f"{name}\n")

    with logictypes_path.open(mode="w") as f:
        for t in sorted(logictypes):
            f.write(f"{t}\n")
    with slotlogictypes_path.open(mode="w") as f:
        for t in sorted(slotlogictypes):
            f.write(f"{t}\n")
    with batchmodes_path.open(mode="w") as f:
        for t in sorted(batchmodes):
            f.write(f"{t}\n")
    with reagentmodes_path.open(mode="w") as f:
        for t in sorted(reagentmodes):
            f.write(f"{t}\n")
    with enums_path.open(mode="w") as f:
        for name in sorted(enums):
            f.write(f"{name}\n")
    with dep_path.open(mode="w") as f:
        for name in sorted(deprecated):
            f.write(f"{name}\n")


if __name__ == "__main__":
    main()
