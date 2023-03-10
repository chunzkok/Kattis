import sys

lines = sys.stdin.readlines()
cost, lawns = map(float, lines[:2])
res = 0
for line in lines[2:]:
    w, l = map(float, line.split())
    res += w*l*cost
print(res)
