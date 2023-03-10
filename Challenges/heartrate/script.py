import sys

lines = sys.stdin.readlines()
res = []
for line in lines[1:]:
    b, p = map(float, line.split())
    res.append([(60*(b-1))/p, 60*b/p, (60*(b+1))/p])
for ans in res:
    print(" ".join(map(str, ans)))
