# B - Christmas Eve Eve
# https://atcoder.jp/contests/abc115/tasks/abc115_b

N = int(input())
arr = [int(input()) for i in range(N)]
print(sum(arr) - max(arr)//2)
