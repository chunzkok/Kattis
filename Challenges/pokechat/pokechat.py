import sys

code = sys.stdin.readline().strip()
seq = sys.stdin.readline().strip()
res = ""
for i in range(0, len(seq), 3):
    pokeId = int(seq[i:i+3])
    res += code[pokeId-1]
print(res)
