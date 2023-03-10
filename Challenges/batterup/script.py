import sys

lines = sys.stdin.readlines()
score, count = 0, 0
for bat in map(int, lines[1].split()):
    if bat == -1:
        continue
    score += bat
    count += 1
print(score/count)
