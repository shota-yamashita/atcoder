# C - たくさんの数式
# https://atcoder.jp/contests/arc061/tasks/arc061_a

s = input()
n = len(s)
 
ans = 0
 
for bit in range(2 ** (n - 1)):
    f = s[0]
 
    for i in range(n - 1):
        if bit & (1 << i):
            f += "+"
        f += s[i + 1]
 
    ans += sum(map(int, f.split("+")))
 
print(ans)
