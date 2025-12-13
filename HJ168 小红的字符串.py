s=list(input())
n=len(s)
res=0
for i in range(n//2):
    distance=abs(ord(s[i])-ord(s[n-1-i]))
    res+=min(distance,26-distance)

print(res)
