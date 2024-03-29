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
            formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    arg_parser.add_argument("path", help="Path to Stationeers installation")
    arg_parser.add_argument("--lang", help="language to extract from (ie. english)", default="english")
    args = arg_parser.parse_args()
    install_path = Path(args.path)
    if install_path.match("Stationeers/*.exe") or install_path.match("Stationeers/rocketstation_Data"):
        install_path = install_path.parent
    elif install_path.name == "Stationeers":
        pass
    elif (install_path / "Stationeers").is_dir():
        install_path = install_path / "Stationeers"
    
    data_path = install_path / "rocketstation_Data" / "StreamingAssets" / "Language" 
    if not data_path.is_dir():

        print(f"Invalid install path. {install_path} does not point to a valid Stationeers installation")
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
    elms = [elm for elm in (interface, strings) if elm is not None ]

    logic_type = re.compile(r"LogicType(\w+)")
    logic_slot_type = re.compile(r"LogicSlotType(\w+)")
    script_command = re.compile(r"ScriptCommand(\w+)")
    script_desc = re.compile(r"ScriptDescription(\w+)")

    operations = set()
    logictypes = set()
    slotlogictypes = set()
    for record in chain.from_iterable(elms):
        key = record.find("Key")
        value = record.find("Value")
        if key is None or value is None:
            continue
        key = key.text
        if key is None or value is None:
            continue
        if match := logic_type.match(key):
            logictypes.add(match.group(1))
        if match := logic_slot_type.match(key):
            slotlogictypes.add(match.group(1))
        if match := script_command.match(key):
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
    enums = set()
    enums_path = Path("data") / "enums.txt"
    if enums_path.exists():
        with enums_path.open("r") as f:
            for line in f.readlines():
                name = line.strip()
                if name:
                    enums.add(name)

    slotlogictypes_path = Path("data") / "slotlogictypes.txt"
    if slotlogictypes_path.exists():
        with slotlogictypes_path.open("r") as f:
            for line in f.readlines():
                name = line.strip()
                if name:
                    slotlogictypes.add(name)
    
    batchmodes = set()
    batchmodes_path = Path("data") / "batchmodes.txt"
    if batchmodes_path.exists():
        with().open("r") as f:
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

    enum_values_path = install_path / "Stationpedia" / "Enums.json"
    if enum_values_path.exists():
        with enum_values_path.open(mode="r") as f:
            enum_values = json.load(f)
            def update_enum(enum, values):
                for name in values:
                    if name not in enum:
                        enum.add(name)
            update_enum(logictypes, enum_values["LogicType"])
            update_enum(slotlogictypes, enum_values["LogicSlotType"])
            update_enum(batchmodes, enum_values["LogicBatchMethod"])
            update_enum(reagentmodes, enum_values["LogicReagentMode"])
            update_enum(enums, enum_values["Enums"])
 
    op_path = Path("data") / "operations.txt"
    with op_path.open(mode="w") as f:
        for name in sorted(operations):
            f.write(f"{name}\n")

    logic_types_path = Path("data") / "logictypes.txt"
    with logic_types_path.open(mode="w") as f:
        for t in sorted(logictypes):
            f.write(f"{t}\n")
    slot_logic_types_path = Path("data") / "slotlogictypes.txt"
    with slot_logic_types_path.open(mode="w") as f:
        for t in sorted(slotlogictypes):
            f.write(f"{t}\n")
    batch_modes_path = Path("data") / "batchmodes.txt"
    with batch_modes_path.open(mode="w") as f:
        for t in sorted(batchmodes):
            f.write(f"{t}\n")
    reagent_modes_path = Path("data") / "reagentmodes.txt"
    with reagent_modes_path.open(mode="w") as f:
        for t in sorted(reagentmodes):
            f.write(f"{t}\n")
    enums_path = Path("data") / "enums.txt"
    with enums_path.open(mode="w") as f:
        for name in sorted(enums):
            f.write(f"{name}\n")

if __name__ == "__main__":
    main()
