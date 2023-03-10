import sys

for line in sys.stdin:
    nums = [int("".join(reversed(num))) for num in line.split()]
    print(max(nums))
