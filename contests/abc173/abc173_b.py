# B - Judge Status Summary
# https://atcoder.jp/contests/abc173/tasks/abc173_b

N = int(input())
arr = [input() for i in range(N)]

for t in ['AC', 'WA', 'TLE', 'RE']:
    print(f'{t} x {arr.count(t)}')
