# 思路1

# from math import ceil,floor
# def ceilNumber(n):
#     a = ceil(n)-n
#     if (a<=0.5):
#         return ceil(n)
#     return floor(n)
# b = float(input())
# print(ceilNumber(b))


# 思路2
# def ceilNumber(n):
#     a = int(n+0.5)
#     return a
# b = float(input())
# print(ceilNumber(b))

# 思路3
n = float(input())
y = lambda x: int(x + 0.5)
print(y(n))
