import sys

lines = sys.stdin.readlines()
for line in lines[1:]:
    nums = [int(num) for num in line.split()]
    print(sum(nums[1:]) - nums[0] + 1)
    
