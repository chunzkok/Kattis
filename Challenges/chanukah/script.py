import sys

for line in sys.stdin.readlines()[1:]:
    n, days = map(int, line.split())
    print(n, int(days/2*(days+3)))
