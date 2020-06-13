# C - 白昼夢
# https://atcoder.jp/contests/abc049/tasks/arc065_a

import re
N = str(input())
 
words = re.findall("^(dream|dreamer|erase|eraser)+$", N)
print('NO') if words == [] else print('YES')