import sys
from random import randint
from mylibs import chk_template

__author__ = "Jung-Lin Yang"
__copyright__ = "Copyright (C) 2022, STUST EECS"
__version__ = "0.1"


def expected():
    l = randint(5,15)
    start = randint(-10,10)
    step = randint(-2,2)
    idat = f"{l} {start} {step}"
    odat = "0 "*l+"\n"
    for _ in range(l):
        odat+=f" {start}"
        start+=step
    print(f"Test Data : {idat}")
    return idat, odat


chk_template.expected = expected

if __name__ == "__main__":
    root = f"./src/{sys.argv[0].split('_')[-1].split('.')[0]}"
    loops = 10
    if len(sys.argv) == 2:
        loops = int(sys.argv[1])
    chk_template.main(root, 0, loops)
