# B - Two Colors Card Game
# https://atcoder.jp/contests/abc091/tasks/abc091_b

n=[input() for _ in range(int(input()))]
m=[input() for _ in range(int(input()))]
l=list(set(n))
print(max(0,max(n.count(l[i])-m.count(l[i]) for i in range(len(l)))))
