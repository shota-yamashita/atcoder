# B - *e**** ********e* *e****e* ****e**
# https://atcoder.jp/contests/tenka1-2019-beginner/tasks/tenka1_2019_b

input()
S = input()
K = int(input())

c = S[K -1]
for i in S:
    if i != c:
        print('*', end='')
    else:
        print(i, end='')
