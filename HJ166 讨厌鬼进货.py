n, x = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

# 计算单独从A或B购买的总成本
total_a = sum(a)
total_b = sum(b)

# 计算混合购买的总成本（每种货物选择A或B中更便宜的）
total_mixed = sum(min(ai, bi) for ai, bi in zip(a, b))

# 比较三种情况下的最小成本
min_cost = min(total_a, total_b, total_mixed, x)

print(min_cost)