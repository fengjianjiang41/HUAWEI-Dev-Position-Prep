while True:
    try:
        num = int(input())
        in_st = input().strip()
        k = int(input())
        mi_st = in_st.split(' ')
        if k == 0:
            print(0)
        else:
            print(mi_st[num-k])
    except:
        break
