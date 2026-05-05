while True:
    try:
        str1=input()
        str2=input()
        n = 0
        s = ''
        if len(str1)>len(str2):
            str1,str2 = str2, str1
        for i in range(len(str1)+1):
            if str1[i-n:i] in str2:
                s = str1[i-n:i]
                n +=1
        print(s)
    except:
        break
