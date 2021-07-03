# B - Theater
# https://atcoder.jp/contests/abc073/tasks/abc073_b

n = int(input())

people = 0
for i in range(n):
    l, r = map(int,input().split())
    people += r - l + 1

print(people)
