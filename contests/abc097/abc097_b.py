# B - Exponential
# https://atcoder.jp/contests/abc097/tasks/abc097_b

x = int(input())
ans = 1

for b in range(1, x):
    for p in range(2, x):
        if b**p<=x:ans = max(ans, b**p)
        else:break
print(ans)
