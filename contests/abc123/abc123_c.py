# C - Five Transportations
# https://atcoder.jp/contests/abc123/tasks/abc123_c

import math
n = int(input())
l = [int(input()) for i in range(5)]
print(math.ceil(n/min(l))+4) # もっとも時間がかかる場合のみ求めれば良い。
