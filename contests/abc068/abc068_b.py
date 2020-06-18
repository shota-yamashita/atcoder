# B - Break Number
# https://atcoder.jp/contests/abc068/tasks/abc068_b

n = int(input())
ans = 1
for i in range(7):
  if 2 ** i <= n: ans = 2 ** i
print(ans)
