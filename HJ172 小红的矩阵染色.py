n, m, k = map(int,input().split())
mesks = ''
for _ in range(n):
    mesks = mesks + input()


zi_list=[]
for i in range(m):
    x = mesks[i::m]  #取列值
    zi_list.extend(x.split('*'))


zi_sort = sorted(zi_list,key = lambda x :len(x),reverse = True)
score = 0
for zi in zi_sort:
    zi_l = len(zi)
    if zi_l<=1:
        continue
    if k>=zi_l:
        score = score + zi_l -1
        k = k-zi_l
        if k<=1:
            break
    else:
        score = score+k-1
        break
print(score)


