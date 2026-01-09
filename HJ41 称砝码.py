n_type = int(input())
weight = list(map(int,input().split()))
number = list(map(int,input().split()))
dp=1
for i in range(n_type):
    for c in range(number[i]):
        dp |=dp << int(weight[i])

print(bin(dp).count('1'))

# 使用一个整数 dp 作为位掩码，通过二进制位来表示能否组成对应重量
# 初始值 dp = 1 表示重量为 0 是可以组成的（二进制最低位为 1）
# 对于每种物品，循环其数量次，每次都进行 dp |= dp << weight[i] 操作：
# 这行代码的作用是将已有的重量组合与当前物品重量相加，得到新的可组成重量
# dp << weight[i] 表示将现有所有可组成的重量都加上当前物品的重量
# |= 操作将新得到的重量组合与原有组合合并（去重）
