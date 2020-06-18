# D - Div Game
# https://atcoder.jp/contests/abc169/tasks/abc169_d

N = int(input())
 
div_counts = []
for i in range(2, int(N**0.5)+1):
    count = 0
    while N%i == 0:
        count += 1
        N //= i
        if N == 1: break
    div_counts.append(count)

if N != 1: div_counts.append(1)

ans = 0
for count in div_counts:
    for i in range(1, count+1):
        if count >= i:
            ans += 1
            count -= i
print(ans)
