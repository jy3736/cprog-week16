import sys
from random import randint
from mylibs import chk_template

__author__ = "Jung-Lin Yang"
__copyright__ = "Copyright (C) 2022, STUST EECS"
__version__ = "0.1"

a = list(range(4))
a[1] = [3, 4, 5, 3, 2, 4, 5, 6, 7, 8, 9]
a[2] = [5, 5, 5, 5, 5, 5, 5]
a[3] = [1, 2, 3, 4, 5, 6]

def expected():
    dat = randint(0,4)
    idat = f"{dat} "
    odat = ""
    if dat in [1,2,3]:
        odat = " ".join(str(_) for _ in a[dat])
    print(f"Test Data : {idat}")
    return idat, odat


chk_template.expected = expected

if __name__ == "__main__":
    root = f"./src/{sys.argv[0].split('_')[-1].split('.')[0]}"
    loops = 10
    if len(sys.argv) == 2:
        loops = int(sys.argv[1])
    chk_template.main(root, 0, loops)
