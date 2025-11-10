import sys

data = sys.stdin.read().splitlines()
t = int(data[0])
index = 1
results = []
for _ in range(t):
    n = int(data[index])
    index += 1
    a = list(map(int, data[index].split()))
    index += 1

    if n == 1:
        results.append(-1)
    elif all(x == 1 for x in a):
        results.append(0)
    else:
        max_a = max(a)
        count_1 = a.count(1)
        if count_1 == n - 1:
            results.append(
                max_a - 1
            )  # 除了一种牌外其他的牌数量为1，则知道max-1张牌后，其他的牌各不相同
        else:
            results.append(max_a)

print('\n'.join(map(str, results)))
