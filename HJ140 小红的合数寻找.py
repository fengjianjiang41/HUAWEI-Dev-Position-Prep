x = int(input())

l, r = x, 2*x

count = 0

while l <= r:
    if(l > 2) and (l%2 ==0):
        print(l)
        break
    else:
        l += 1
else:
    print(-1)