import sys

lines = sys.stdin.readlines();
N, Q = lines[0].split()
dist = list(map(int, lines[1].split()))
for line in lines[2:]:
    if line[0] == '1':
        C, X = line.split()[1:]
        dist[int(C)-1] = int(X)
    else:
        A, B = map(int, line.split()[1:])
        print(abs(dist[A-1] - dist[B-1]))
