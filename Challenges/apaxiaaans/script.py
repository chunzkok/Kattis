import sys

res = ""
prev = ''
for c in sys.stdin.readline().strip():
    if c == prev:
        continue
    res += c
    prev = c
print(res)
