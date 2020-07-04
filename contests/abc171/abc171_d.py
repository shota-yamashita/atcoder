# D - Replacing
# https://atcoder.jp/contests/abc171/tasks/abc171_d

from collections import Counter
 
N = int(input())
a = Counter(map(int, input().split()))
Q = int(input())
 
sum_a = sum(a.elements())
 
for i in range(Q):
    b, c = map(int, input().split())
    a[c] += a[b]
    sum_a += (c-b) * a[b]
    a[b] = 0
    print(sum_a)
