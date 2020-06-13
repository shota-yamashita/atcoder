# B - Shift only
# https://atcoder.jp/contests/abc081/tasks/abc081_b

n = int(input())
arr = list(map(int, input().split()))
count = 0
while all(a % 2 == 0 for a in arr):
  arr = [i / 2 for i in arr]
  count += 1
  
print(count)
