import sys

best = (0, 0)
position = 1
for line in sys.stdin.readlines():
    res = sum(map(int, line.split()))
    if best == (0, 0) or res > best[1]:
        best = (position, res)
    position += 1
print(*best)
