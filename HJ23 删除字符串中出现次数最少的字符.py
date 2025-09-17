while True:
    try:
        aaa = list(input())
        b = list(set(aaa))
        c=[]
        for i in b:
            c.append(aaa.count(i))
        for i in range(len(c)):
            if c[i] == min(c): 
                while b[i] in aaa:aaa.remove(b[i])
        print("".join(aaa))
    except:
        break
