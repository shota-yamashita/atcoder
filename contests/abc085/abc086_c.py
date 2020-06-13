# C - Otoshidama
# https://atcoder.jp/contests/abc085/tasks/abc085_c

import sys
 
N, Y = map(int, input().split())
 
for a in range(N+1):
    for b in range(N+1-a):
        c = N-a-b
        num = a*10000 + b*5000 + c*1000
        if num == Y:
            print("{} {} {}".format(a, b, c))
            find_ans = True
            sys.exit()
 
print('-1 -1 -1')
