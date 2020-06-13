# C - Traveling
# https://atcoder.jp/contests/abc086/tasks/arc089_a

N = int(input())
now = [0, 0]
 
for i in range(N):
    t, x, y = map(int, input().split())
    dist = abs(x - now[0]) + abs(y - now[1])
    if t < dist or (t % 2 != dist %2):
        print('No')
        quit()
 
print('Yes')
