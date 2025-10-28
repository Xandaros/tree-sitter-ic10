#!/usr/bin/env python3

import argparse
import json
import re
import sys
from collections import defaultdict
from itertools import chain, filterfalse, tee
from pathlib import Path
from typing import Callable, Iterable, TypedDict, TypeVar


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
    arg_parser.add_argument(
        "path",
        help="Path to Stationeers installation or location of Stationpedia.json and Enums.json",
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

    if (install_path / "Stationpedia").is_dir():
        install_path = install_path / "Stationpedia"

    enums_path = install_path / "Enums.json"
    stationpedia_path = install_path / "Stationpedia.json"
    for path in [stationpedia_path, enums_path]:
        if not path.exists():
            print(f"Invalid data path. '{path}' does nto exist")
            arg_parser.print_help()
            sys.exit(1)

    extract_data(install_path)


class ScriptCommand(TypedDict):
    desc: str
    example: str


class ScriptConstant(TypedDict):
    desc: str
    value: str


class Stationpedia(TypedDict):
    version: str
    pages: list
    core_prefabs: list
    reagents: dict
    scriptCommands: dict[str, ScriptCommand]
    scriptConstants: dict[str, ScriptConstant]


class EnumEntry(TypedDict):
    value: int
    deprecated: bool
    description: str


class EnumListing(TypedDict):
    enumName: str
    values: dict[str, EnumEntry]


class Enums(TypedDict):
    scriptEnums: dict[str, EnumListing]
    basicEnums: dict[str, EnumListing]


T = TypeVar("T")
D = TypeVar("D")


def partition(
    iter: Iterable[T], pred: Callable[[T], bool]
) -> tuple[Iterable[T], Iterable[T]]:
    t1, t2 = tee(iter)
    return filterfalse(pred, t1), filter(pred, t2)


def partition_map(
    iter: Iterable[T], pred: Callable[[T], bool], maping: Callable[[T], D]
) -> tuple[Iterable[D], Iterable[D]]:
    t1, t2 = partition(iter, pred)
    return map(maping, t1), map(maping, t2)


def extract_data(install_path):
    enums_path = install_path / "Enums.json"
    stationpedia_path = install_path / "Stationpedia.json"

    script_commands: dict[str, ScriptCommand] = {}
    script_constants: dict[str, ScriptConstant] = {}

    with stationpedia_path.open(mode="r") as f:
        exported: Stationpedia = json.load(f)
        script_commands = exported["scriptCommands"]
        script_constants = exported["scriptConstants"]

    exported_enum_listing: Enums = {"basicEnums": {}, "scriptEnums": {}}

    with enums_path.open(mode="r") as f:
        exported_enum_listing = json.load(f)

    enum_help = {}
    deprecated: set[str] = set()
    logictypes: set[str] = set()
    slotlogictypes: set[str] = set()
    reagentmodes: set[str] = set()
    batchmodes: set[str] = set()

    operations: set[str] = set()
    constants: set[str] = set()
    enums: set[str] = set()

    dep_path = Path("data") / "deprecated.txt"
    logictypes_path = Path("data") / "logictypes.txt"
    slotlogictypes_path = Path("data") / "slotlogictypes.txt"
    enums_path = Path("data") / "enums.txt"
    batchmodes_path = Path("data") / "batchmodes.txt"
    reagentmodes_path = Path("data") / "reagentmodes.txt"
    op_path = Path("data") / "operations.txt"
    constant_path = Path("data") / "constants.txt"

    operations.update(script_commands.keys())
    constants.update(script_constants.keys())

    exported_logictypes, depricated_logictypes = partition_map(
        exported_enum_listing["scriptEnums"]["LogicType"]["values"].items(),
        lambda enum: enum[1]["deprecated"],
        lambda enum: enum[0],
    )
    logictypes.update(exported_logictypes)
    deprecated.update(depricated_logictypes)

    exported_slotlogictypes, depricated_slotlogictypes = partition_map(
        exported_enum_listing["scriptEnums"]["LogicSlotType"]["values"].items(),
        lambda enum: enum[1]["deprecated"],
        lambda enum: enum[0],
    )
    slotlogictypes.update(exported_slotlogictypes)
    deprecated.update(depricated_slotlogictypes)

    exported_reagentmodes, depricated_reagentmodes = partition_map(
        exported_enum_listing["scriptEnums"]["LogicReagentMode"]["values"].items(),
        lambda enum: enum[1]["deprecated"],
        lambda enum: enum[0],
    )
    reagentmodes.update(exported_reagentmodes)
    deprecated.update(depricated_reagentmodes)

    exported_batchmodes, depricated_batchmodes = partition_map(
        exported_enum_listing["scriptEnums"]["LogicBatchMethod"]["values"].items(),
        lambda enum: enum[1]["deprecated"],
        lambda enum: enum[0],
    )
    batchmodes.update(exported_batchmodes)
    deprecated.update(depricated_batchmodes)

    def map_enum_listing(
        item: tuple[str, EnumListing],
    ) -> Iterable[tuple[str, EnumEntry]]:
        name, listing = item
        if name == "_unnamed":
            name = ""
        else:
            name = f"{name}."
        return map(
            lambda entry: (f"{name}{entry[0]}", entry[1]), listing["values"].items()
        )

    exported_enums, depricated_enums = partition_map(
        chain.from_iterable(
            map(map_enum_listing, exported_enum_listing["basicEnums"].items())
        ),
        lambda enum: enum[1]["deprecated"],
        lambda enum: enum[0],
    )
    enums.update(exported_enums)
    deprecated.update(depricated_enums)

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
    with constant_path.open(mode="w") as f:
        for name in sorted(constants):
            f.write(f"{name}\n")

if __name__ == "__main__":
    main()
