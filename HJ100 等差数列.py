while True:
    try:
        n=int(input())
        s=0
        for i in range(n):
            s=s+3*i
        s=2*n+s
        print(int(s))
    except:
        break
