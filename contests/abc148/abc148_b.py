# B - Strings with the Same Length
# https://atcoder.jp/contests/abc148/tasks/abc148_b

n = input()
s, t = input().split()
print(*[s+t for s,t in zip(s,t)],sep="")
