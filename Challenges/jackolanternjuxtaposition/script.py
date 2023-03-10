import sys

for line in sys.stdin:
    nums = [int(num) for num in line.split()]
    res = 1
    for num in nums:
        res *= num
    print(res)
