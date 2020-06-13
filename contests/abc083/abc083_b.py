# B - Some Sums
# https://atcoder.jp/contests/abc083/tasks/abc083_b

n, a, b = map(int, input().split())
total = 0
 
for i in range(n+1):
    if a <= sum(map(int, list(str(i)))) <= b:
        total += i
 
print(total)
