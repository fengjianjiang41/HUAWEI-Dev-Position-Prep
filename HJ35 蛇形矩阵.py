while True:
    try:
        num = int(input())
        for i in range(num):
            if i == 0:
                res = [(x+2)*(x+1)//2 for x in range(num)]
            else:
                res = [x - 1 for x in res[1:]]
            print(' '.join(map(str, res)))
    except:
        break
