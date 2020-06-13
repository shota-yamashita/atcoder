# B - 105
# https://atcoder.jp/contests/abc106/tasks/abc106_b

n = int(input())

count = 0
odd_count = 0
for i in range(1, n+1):
    if i % 2 != 0:
        for j in range(1, i+1):
            if i % j  == 0:
                odd_count += 1
        if odd_count == 8:
            count += 1
        odd_count = 0

print(count)
