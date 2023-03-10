import sys

for line in sys.stdin:
    N = int(line)
    rows = 2
    for i in range(N):
        rows += rows - 1
    print(rows**2)
