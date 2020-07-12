# B - Minor Change
# https://atcoder.jp/contests/abc172/tasks/abc172_b

S=input()
T=input()
ans=0

for i in range(0, len(S)):
    if S[i] != T[i]:
        ans += 1
print(ans)
