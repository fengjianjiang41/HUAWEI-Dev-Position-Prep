import sys

n = map(int,sys.stdin.readline().strip())
a = list(map(int,sys.stdin.readline().split()))
bag = []
if sum(a) % 2 == 0:
    print(sum(a))
else:
    res = [i for i in a if i % 2 == 1]
    if res:
        min_res = min(res)
        print(sum(a) - min_res)
    else:
        print(0)


