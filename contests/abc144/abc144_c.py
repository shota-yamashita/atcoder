# C - Walk on Multiplication Table
# https://atcoder.jp/contests/abc144/tasks/abc144_c

N=int(input())
move=int(N**.5)
while N%move!=0:
    move-=1
print(N//move+move-2)
