import sys

res = 0
for line in sys.stdin:
    inp = list(map(float, line.split()))
    if len(inp) == 2:
        res += inp[0] * inp[1]
print(res)
