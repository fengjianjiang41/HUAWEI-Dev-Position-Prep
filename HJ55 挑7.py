N=30000
M=len(str(N))-2
def getCountOfSeven(n):
    sevenList=[]
    # 7的倍数
    for i in range(7,n+1,7):
        sevenList.append(i)
    # 个位是7
    for i in range(7,n+1,10):
        sevenList.append(i)
    # 十位是7、百位是7、千位是7……
    for a in [10**i for i in range(M)]:
        for flag in [(80+100*j)*a for j in range(N//(100*a))]:
            tmp=n+1 if n<flag else flag
            for i in range(flag-10*a,tmp):
                sevenList.append(i)
    sevenList=list(set(sevenList))
    return len(sevenList)

while True:
    try:
        print(getCountOfSeven(int(input().strip())))
    except:
        break
