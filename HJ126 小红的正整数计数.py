l,r = list(map(int, input().split()))
a = 0
for i in range(l,r+1):
    if i % 2 == 0:
        a += 1
print(a)