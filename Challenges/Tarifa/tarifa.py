import sys

inps = list(map(lambda line: int(line),sys.stdin.readlines()))
print(inps[0] * (inps[1]+1) - sum(inps[2:]))
