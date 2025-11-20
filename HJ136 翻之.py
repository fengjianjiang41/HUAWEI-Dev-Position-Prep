n,m = list(map(int,input().split()))
s = ''
dic ={}
for i in range(n):
    s = s+input()
for i in range(m):
    x = s[i::m]
    if x in dic:
        dic[x] += 1
    else:
        dic[x] = 1
print(max(dic.values()) if dic else 0)
