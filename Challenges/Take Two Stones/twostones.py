import sys

for line in sys.stdin:
    n = int(line)
    print("Alice" if n%2 else "Bob")
