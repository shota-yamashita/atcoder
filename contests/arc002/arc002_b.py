# B - 割り切れる日付
# https://atcoder.jp/contests/arc002/tasks/arc002_2

import datetime

y, m, d = map(int,input().split('/'))

Dt = datetime.datetime(y,m,d)
while Dt.year % Dt.month != 0 or Dt.year // Dt.month % Dt.day != 0:
    Dt += datetime.timedelta(days = 1)

print(Dt.strftime('%Y/%m/%d'))
