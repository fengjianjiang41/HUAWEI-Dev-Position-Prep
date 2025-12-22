while True:
    try:
        strs=input()
        res,words=[False]*len(strs),[]
        for i,ch in enumerate(strs):
            if ch.isalpha():
                words.append(ch)
            else:
                res[i]=ch
        words.sort(key=lambda c:c.lower())
        for i,ch in enumerate(res):
            if not ch:
                res[i]=words[0]
                words.pop(0)
        print(''.join(res))


    except:
        break
