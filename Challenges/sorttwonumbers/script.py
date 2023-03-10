import sys

a, b = map(int, sys.stdin.readline().split())
print(f"{a} {b}" if a <= b else f"{b} {a}")
