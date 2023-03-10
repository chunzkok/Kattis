import sys

lines = sys.stdin.readlines()
groups = []
i = 1
while i < len(lines):
    num_cities = int(lines[i])
    next_num = i + num_cities + 1
    groups.append(lines[i+1:next_num])
    i = next_num
res = []
for group in groups:
    cities = set(group)
    res.append(len(cities))
for out in res:
    print(out)
