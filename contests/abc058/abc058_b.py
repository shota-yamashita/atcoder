# B - ∵∴∵
# https://atcoder.jp/contests/abc058/tasks/abc058_b

o = list(input())
e = list(input()) + [""]

for x, y in zip(o, e):
    print(x+y, end="")
