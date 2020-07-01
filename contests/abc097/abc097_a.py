# A - Colorful Transceivers
# https://atcoder.jp/contests/abc097/tasks/abc097_a

a,b,c,d=map(int,input().split())
if abs(c-a)<=d or abs(b-a) <=d and abs(c-b)<=d:
    print('Yes')
else:
    print('No')
