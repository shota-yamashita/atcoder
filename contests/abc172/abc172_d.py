# D - Sum of Divisors
# https://atcoder.jp/contests/abc172/tasks/abc172_d

N=int(input())
ans=0
for i in range(1,N+1):
    a=N//i
    ans+=(a*(a+1)*i)//2
print(ans)
