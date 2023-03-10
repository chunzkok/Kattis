import sys

for line in sys.stdin:
    d1, d2 = [int(num) for num in line.split()]
    d1_odds, d2_odds = 1/d1, 1/d2
    sum_probs = [0 for i in range(d1+d2+1)]
    for i in range(2, d1+d2+1):
        for d1_roll in range(1, d1+1):
            req = i - d1_roll
            if req > 0 and req <= d2:
                sum_probs[i] += d1_odds * d2_odds
    max_prob = max(sum_probs)
    res = []
    for num, prob in enumerate(sum_probs):
        if prob == max_prob:
            res.append(num)
    for num in res:
        print(num)
