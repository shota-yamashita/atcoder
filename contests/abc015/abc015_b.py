# B - 高橋くんの集計
# https://atcoder.jp/contests/abc015/tasks/abc015_2

import math
n = int(input())
a = list(map(int, input().split()))
print(math.ceil(sum(a)/(n - a.count(0))))
