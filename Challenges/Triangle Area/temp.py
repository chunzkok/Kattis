import sys

for line in sys.stdin:
    a, b = map(int, line.split()[:2])
    print(0.5 * a * b)
