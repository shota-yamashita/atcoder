# C - Forbidden List
# https://atcoder.jp/contests/abc170/tasks/abc170_c

X, N = map(int, input().split())
arr = list(map(int, input().split()))
 
ans = 0
for i in range(1, 102):
    if abs(X - i) < abs(X - ans) and i not in arr:
        ans = i
print(ans)
