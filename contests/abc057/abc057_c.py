# C - Digits in Multiplication
# https://atcoder.jp/contests/abc057/tasks/abc057_c

n = int(input())

for i in range(1, int(n**0.5) + 1):
	if n%i == 0:
		ans = len(str(n // i))

print(ans)
