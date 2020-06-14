# C - Train Ticket
# https://atcoder.jp/contests/abc079/tasks/abc079_c

A, B, C, D = map(str, input())
 
for op1 in '+-':
    for op2 in '+-':
        for op3 in '+-':
            if eval(A+op1+B+op2+C+op3+D) == 7:
                print(A+op1+B+op2+C+op3+D+'=7')
                exit()
