def compare(a,b):
    m,n=len(a),len(b)
    dp=list(range(n+1))
    for i in range(1,m+1):
        pre=dp[::]
        dp[0]=i
        for j in range(1,n+1):
            if a[i-1]==b[j-1]:
                dp[j]=pre[j-1]
            else:
                dp[j]=min(pre[j],pre[j-1],dp[j-1])+1
    return dp[-1]
while True:
    try:
        a=input()
        b=input()
        if a=='' or b=='':
            print(abs(len(a)-len(b)))
        else:
            print(compare(a,b))
    except:
        break
