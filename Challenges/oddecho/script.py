import sys

words = list(map(lambda x: x.strip(), sys.stdin.readlines()[1::2]))
for word in words:
    print(word)
