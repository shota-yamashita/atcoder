# B - 文字列大好きいろはちゃんイージー
# https://atcoder.jp/contests/abc042/tasks/abc042_b

n, l = map(int, input().split())

strs = sorted([input() for i in range(n)])
print(''.join(strs))
