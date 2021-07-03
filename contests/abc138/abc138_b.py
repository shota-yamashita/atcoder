# B - Resistors in Parallel
# https://atcoder.jp/contests/abc138/tasks/abc138_b

n = int(input())
a = list(map(int,input().split()))

down = 0
for i in range(n):
    down += 1 / a[i]
print(1 / down)
