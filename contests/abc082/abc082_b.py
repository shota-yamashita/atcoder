# B - Two Anagrams
# https://atcoder.jp/contests/abc082/tasks/abc082_b

s = sorted(input())
t = sorted(input(),reverse = True)
print('Yes' if s<t else 'No')
