# B - Toll Gates
# https://atcoder.jp/contests/abc094/tasks/abc094_b

N, M, X = map(int, input().split())
A = list(map(int, input().split()))
left = 0
right = 0
for i in A:
    if i < X:
        left += 1
    else:
        right += 1
 
print(min(left, right))
