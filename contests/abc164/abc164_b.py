# B - Battle
# https://atcoder.jp/contests/abc164/tasks/abc164_b

a, b, c, d = map(int,input().split())
while a>0 and c>0:
    c -= b
    a -= d

if c <= 0: print('Yes')
else: print('No')
