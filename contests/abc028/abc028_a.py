# A - テスト評価
# https://atcoder.jp/contests/abc028/tasks/abc028_a

n = int(input())
if n < 60:
    print('Bad')
elif n < 90:
    print('Good')
elif n < 100:
    print('Great')
else:
    print('Perfect')
