# A - Square Inequality
# https://atcoder.jp/contests/abc199/tasks/abc199_a

a, b, c = map(int, input().split())
if (a*a + b*b < c*c):
    print('Yes')
else:
    print('No')
