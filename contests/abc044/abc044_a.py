# A - 高橋君とホテルイージー
# https://atcoder.jp/contests/abc044/tasks/abc044_a

n, k, x, y = [int(input()) for i in range(4)]
print(n*x if n <= k else k*x + (n-k)*y)
