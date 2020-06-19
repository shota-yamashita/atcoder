# A - Transfer
# https://atcoder.jp/contests/abc136/tasks/abc136_a

a,b,c=map(int, input().split())
ans = b+c-a
print(ans if ans>0 else 0)
