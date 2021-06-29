# A - Repression
# https://atcoder.jp/contests/abc207/tasks/abc207_a

a,b,c = map(int,input().split())
print(max(a+b, b+c, c+a))
