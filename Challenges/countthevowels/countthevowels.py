import sys

s = sys.stdin.readline()
vowels = ['A', 'E', 'I', 'O', 'U']
count = 0
for c in s.upper():
    if c in vowels:
        count += 1
print(count)
