import sys

lines = [int(line) for line in sys.stdin]
print(sum(lines[1:]) - lines[0] + 1)
