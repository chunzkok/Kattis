import sys

for line in sys.stdin:
    seen = []
    res = 1
    for c in line:
        if c in seen:
            res = 0
            break
        else:
            seen.append(c)
    print(res)
