while True:
    try:
        n = int(input())
        num =0
        for i in range(n):
            b = str(i**2)
            if b.endswith(str(i)):
                num+=1
        print(num)
    except:
        break
