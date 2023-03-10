import sys

temps = sys.stdin.readlines()[1]
print(len(list(filter(lambda x: int(x) < 0, temps.split()))))
