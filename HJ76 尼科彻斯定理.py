while True:
    try:
        n = int(input())
        sq = n**2
        for i in range(0, n-1):
            print(str(sq-n+1+2*i), end="+")
        print(str(sq+n-1))
    except:
        break
