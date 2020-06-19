# B - 編集
# https://atcoder.jp/contests/abc037/tasks/abc037_b

N, Q = map(int, input().split())
a=[0]*N

for i in range(Q):
    L,R,T=map(int, input().split())
    for i in range(L,R+1):
        a[i-1]=T

print(*a, sep='\n')
