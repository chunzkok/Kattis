import sys

for line in sys.stdin.readlines()[1:]:
    r, e, c = map(int, line.split())
    p1, p2 = r, e - c
    if p1 < p2:
        print("advertise")
    elif p1 > p2:
        print("do not advertise")
    else:
        print("does not matter")
    
