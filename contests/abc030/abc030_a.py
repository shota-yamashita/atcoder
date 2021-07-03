# A - 勝率計算
# https://atcoder.jp/contests/abc030/tasks/abc030_a

a, b, c, d = map(int, input().split())
tk = b / a
ao = d / c

if(tk > ao):
    print('TAKAHASHI')
elif(ao > tk):
    print('AOKI')
else:
    print('DRAW')
