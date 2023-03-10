import sys

for line in sys.stdin:
    a,b = map(int, line.split())
    print(a*(b-1)+1)
