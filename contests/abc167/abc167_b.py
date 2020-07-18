# B - Easy Linear Programming
# https://atcoder.jp/contests/abc167/tasks/abc167_b

A, B, C, K = map(int, input().split())

if A >= K:
    print(K)
elif A+B >= K:
    print(A)
else:
    print(2*A+B-K)
