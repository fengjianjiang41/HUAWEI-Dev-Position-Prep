from collections import Counter

n = int(input())
a = list(map(int, input().split()))

b = [a[i] - i for i in range(n)]
count = Counter(b)

result = 0
for cnt in count.values():
    if cnt > 1:
        result += cnt * (cnt - 1) // 2

print(result)
