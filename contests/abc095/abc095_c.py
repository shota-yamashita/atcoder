# C - Half and Half
# https://atcoder.jp/contests/abc095/tasks/arc096_a

a, b, c, x, y=map(int,input().split())
print(min(a*x+b*y, c*2*x + b*max(0,y-x), c*2*y + a*max(0,x-y)))
