import sys

lines = sys.stdin.readlines()
nums = [int(num) for num in lines[1].split()]
print(sum(nums))
