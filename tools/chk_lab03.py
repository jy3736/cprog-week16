import sys
from random import randint
from mylibs import chk_template

__author__ = "Jung-Lin Yang"
__copyright__ = "Copyright (C) 2022, STUST EECS"
__version__ = "0.1"


def expected():
    dat = [randint(1, 100) for _ in range(randint(10, 20))]
    l = len(dat)
    s = randint(-5, 3)
    e = randint(l-5, l+10)
    r = randint(0, 1)
    idat = f"{s} {e} {r} {' '.join(str(_) for _ in dat)}"
    if e == -1:
        e = l
    if s < 0:
        s = 0
    dat = dat[s:e]
    if r==1:
        dat.reverse()
    odat = ' '.join(str(_) for _ in dat)
    print(f"Test Data : {idat}")
    return idat, odat


chk_template.expected = expected

if __name__ == "__main__":
    root = f"./src/{sys.argv[0].split('_')[-1].split('.')[0]}"
    loops = 10
    if len(sys.argv) == 2:
        loops = int(sys.argv[1])
    chk_template.main(root, 0, loops)
