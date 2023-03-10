import sys

for line in sys.stdin:
    inp = line.split()
    a, b = map(int, inp[:2])
    print(a+b)
    
