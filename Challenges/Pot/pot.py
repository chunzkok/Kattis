import sys

lines = sys.stdin.readlines()
res = 0
for line in lines[1:]:
    comb_num = int(line)
    num, powr = comb_num // 10, comb_num % 10
    res += num**powr
print(res)
    
