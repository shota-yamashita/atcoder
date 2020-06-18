# C - Alchemist
# https://atcoder.jp/contests/abc138/tasks/abc138_c

N = int(input())
v = sorted(map(int,input().split()))

value = v[0]
for i in range(1,N):
    value=(value+v[i])/2
print(value)
