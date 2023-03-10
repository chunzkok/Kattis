import sys

for line in sys.stdin:
    inp = line.split()
    n = int(inp[0])
    dp = [1,1,2]
    for i in range(3, n+1):
        dp.append(dp[i-3] + dp[i-2] + dp[i-1])
    print(dp[n])
