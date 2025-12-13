import sys

a,b,x = map(int, input().split())
money = 0
if (3*a <= b): money = a * x
else:
    group = x//3
    remain = x%3
    rmoney = min(remain*a, b)
    money = group*b+rmoney
print(int(money))
