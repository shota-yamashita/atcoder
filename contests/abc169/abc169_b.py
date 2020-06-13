# B - Multiplication 2
# https://atcoder.jp/contests/abc169/tasks/abc169_b

n = int(input())
arr = list(map(int, input().split()))

if 0 in arr:
    print(0)
    exit()

ans = 1
for i in range(len(arr)):
    ans *= arr[i]
    if ans > 10 ** 18:
        print(-1)
        exit()

print(ans)
