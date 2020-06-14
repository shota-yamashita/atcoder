# C - Ants on a Circle
# https://atcoder.jp/contests/agc013/tasks/agc013_c

n, l, t = map(int,input().split())

c = []
s = 0

for i in range(n):
    x, w = map(int,input().split())
    if w == 1:
        c.append((x+t)%l)
        s += (x+t)//l
    else: # w == 2
        c.append((x-t)%l)
        s += (x-t)//l

c.sort()
s %= n
c = c[s:] + c[:s]
print(*[i for i in c], sep='\n')
