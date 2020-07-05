# B - Choose Integers
# https://atcoder.jp/contests/abc060/tasks/abc060_b

A,B,C=map(int,input().split())
print('YES' if any((A*i)%B==C for i in range(1,B+1)) else 'NO')
# B - Choose Integers
# https://atcoder.jp/contests/abc060/submissions/14948017

A,B,C=map(int,input().split())
print('YES' if any((A*i)%B==C for i in range(1,B+1)) else 'NO')
