# B - One Clue
# https://atcoder.jp/contests/abc137/tasks/abc137_b

k, x = map(int, input().split())
print(*[x for x in range(x-k+1, x+k)])
