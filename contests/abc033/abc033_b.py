# B - 町の合併
# https://atcoder.jp/contests/abc033/tasks/abc033_b

n=int(input())

S = []
P = []

for i in range(n):
    s,p=input().split()
    S.append(s)
    P.append(int(p))

if sum(P)/2<max(P):
    print(S[P.index(max(P))])
else:
    print('atcoder')
