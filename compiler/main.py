import sys
from parser import *


def main(argv, arc):
    filename = argv[1]
    # filename = "compiler/scripts/function.cbs"
    with open(filename, "r") as file:
        source = file.read()
        Parser.run(source)


if __name__ == "__main__":
    main(sys.argv, len(sys.argv))
