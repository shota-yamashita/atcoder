# B - Card Game for Two
# https://atcoder.jp/contests/abc088/tasks/abc088_b

n = int(input())
 
arr = list(map(int, input().split()))
arr.sort(reverse=True)
 
a_point = 0
b_point = 0
for i in range(len(arr)):
    if i % 2 == 0:
        a_point += arr[i]
    else:
        b_point += arr[i]
 
print(a_point - b_point)
