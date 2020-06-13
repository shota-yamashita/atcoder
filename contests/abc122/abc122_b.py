# B - ATCoder
# https://atcoder.jp/contests/abc122/tasks/abc122_b

S = input()
ans = 0
count = 0
 
for char in S:
    if char in 'ACGT':
        count += 1
    else:
        count = 0
    ans = max(ans, count)
print(ans)
