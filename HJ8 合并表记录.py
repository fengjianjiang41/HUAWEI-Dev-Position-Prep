s={}
k=int(input())
for i in range(1,k+1):
    x=input().split()

    if int(x[0]) not in s:
        s[int(x[0])]=int(x[1])
    else:
        s[int(x[0])]+=int(x[1])
for j in sorted(s):
    print(j,s[j])
