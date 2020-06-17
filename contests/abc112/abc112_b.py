# B - Time Limit Exceeded
# https://atcoder.jp/contests/abc112/tasks/abc112_b

N, T = map(int, input().split())

m = 1001
for i in range(N):
    c, t = map(int, input().split())
    if t <= T:
        m = min(m, c)

if m == 1001:
    print('TLE')
else:
    print(m)
