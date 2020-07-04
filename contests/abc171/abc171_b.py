# B - Mix Juice
# https://atcoder.jp/contests/abc171/tasks/abc171_b

N,K=map(int,input().split())
p=sorted(list(map(int,input().split())))
print(sum(p[:K]))
