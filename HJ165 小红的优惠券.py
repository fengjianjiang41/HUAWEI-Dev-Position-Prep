n, m = list(map(int, input().split()))

pay = n
for i in range(m):
    a, b = list(map(int, input().split()))
    if n >= a and n - b < pay:
        pay = n - b

print(pay)