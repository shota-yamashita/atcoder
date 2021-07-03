# A - The Number of Even Pairs
# https://atcoder.jp/contests/abc159/tasks/abc159_a

n, m = map(int, input().split())
print((n*(n-1) // 2) + (m*(m-1)//2))
