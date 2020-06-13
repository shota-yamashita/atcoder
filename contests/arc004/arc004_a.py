# A - 2点間距離の最大値 ( The longest distance )
# https://atcoder.jp/contests/arc004/submissions/14200487

N = int(input())

arr_x = []
arr_y = []
arr_dist = []

for i in range(0, N):
    x, y = list(map(int, input().split()))
    arr_x.append(x)
    arr_y.append(y)

for i in range(0, N):
    for j in range(i, N):
        arr_dist.append((arr_x[j]-arr_x[i])**2 + (arr_y[j]-arr_y[i])**2)

print(max(arr_dist) ** 0.5)
