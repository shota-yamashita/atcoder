# D - Not Divisible
# https://atcoder.jp/contests/abc170/tasks/abc170_d

n = int(input())
arr = list(map(int, input().split()))

max_arr = max(arr)
dp = [0] * (max_arr + 1)

for i in arr:
    for j in range(i, max_arr + 1, i):
        dp[j] += 1

print([dp[i] for i in arr].count(1))
