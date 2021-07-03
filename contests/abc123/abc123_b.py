# B - Five Dishes
# https://atcoder.jp/contests/abc123/tasks/abc123_b

ans = 0
r = 10

for i in range(5):
    a = int(input())
    if a%10 == 0:
        ans += a
    else:
        r = min(r, a%10)
        ans += (a//10) * 10 + 10

ans += r - 10
print(ans)
