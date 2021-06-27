# B - K-th Common Divisor
# https://atcoder.jp/contests/abc120/tasks/abc120_b

a, b, k = map(int, input().split())
arr = []
for i in range(1, min(a, b)+1):
    if a%i==0 and b%i==0:
         arr.append(i)

print(arr[-k])
