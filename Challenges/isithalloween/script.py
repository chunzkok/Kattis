import sys

mon, date = sys.stdin.readline().split()
if (mon == "OCT" and date == "31") or (mon == "DEC" and date == "25"):
    print("yup")
else:
    print("nope")
