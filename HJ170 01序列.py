import sys

n  = int(input())
state = 1
count = 0
arr = list(map(int, sys.stdin.readline().split()))
for a in arr:
    if a == 1:
        state = 0
    else:
        state+=1
        if state == 3:
            count+=1
            state=1
if state == 2:
    count+=1

m = int(input())
if m <= count:
    print("true")
else:
    print("false")
