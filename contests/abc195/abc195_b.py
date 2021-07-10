# B - Many Oranges
# https://atcoder.jp/contests/abc195/tasks/abc195_b

import math

a, b, w = map(int,input().split())

high = int(math.floor(1000*w/a))
low = int(math.ceil(1000*w/b))

if low > high:
    print("UNSATISFIABLE")
else:
    print(low,high)
