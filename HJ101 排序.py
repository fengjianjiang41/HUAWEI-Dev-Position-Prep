while True:
    try:
        a=int(input())
        b=list(map(int,input().split()))
        c=int(input())
        ans=sorted(b,reverse=c)
        res=''
        for i in ans:
            res=res+str(i)+" "
        print(res)
    except:
        break