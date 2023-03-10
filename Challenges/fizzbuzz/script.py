import sys

for line in sys.stdin:
    x, y, n = map(int, line.split())
    for num in range(1, n+1):
        replace = ""
        if not num % x:
            replace += "Fizz"
        if not num % y:
            replace += "Buzz"
        if not replace == "":
            print(replace)
        else:
            print(num)

