import sys

lines = sys.stdin.readlines()
dom = lines[0].split()[1]
total = 0
for line in lines[1:]:
    num, suit = line.strip()
    if num == '7' or num == '8':
        continue
    elif num == '9':
        if suit == dom:
            total += 14
    elif num == 'T':
        total += 10
    elif num == 'J':
        total += 2
        if suit == dom:
            total += 18
    elif num == 'Q':
        total += 3
    elif num == 'K':
        total += 4
    elif num == 'A':
        total += 11
print(total)
