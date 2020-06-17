# B - 運動管理
# https://atcoder.jp/contests/abc031/tasks/abc031_b

L, H = map(int, input().split())
N = int(input())
for i in range(N):
    A = int(input())
    if A < L:
        print(L - A)
    elif H < A:
        print(-1)
    else:
        print(0)
