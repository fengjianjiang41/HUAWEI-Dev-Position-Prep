l, r ,x = map(int,input().split())
while l <= r:
    if l %x == 0:
        print(l)
        break
    l += 1
if l >r:
    print(-1)

