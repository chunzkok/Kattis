import sys

for line in sys.stdin:
    word = line.strip()
    print((word + ' ') * 2 + word)
