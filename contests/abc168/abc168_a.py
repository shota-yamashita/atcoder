# A - ∴ (Therefore)
# https://atcoder.jp/contests/abc168/tasks/abc168_a

n=int(input())%10
if n in [2,4,5,7,9]:print('hon')
elif n in [0,1,6,8]:print('pon')
else:print('bon')
