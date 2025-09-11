
while True:
    e=[]
    try:
        s = list(input())
        for i in s:
            if i>="A" and i <="Z":
                t=chr((ord(i)+33))
                if t>'z':
                    t='a'
                e.append(t)
            elif i>="a" and i <="c":
                 e.append('2')
            elif i>="d" and i <="f":
                 e.append('3')
            elif i>="g" and i <="i":
                 e.append('4')
            elif i>="j" and i <="l":
                 e.append('5')
            elif i>="m" and i <="o":
                 e.append('6')
            elif i>="p" and i <="s":
                 e.append('7')
            elif i>="t" and i <="v":
                 e.append('8')
            elif i>="w" and i <="z":
                 e.append('9')
            else :
                 e.append(i)
        print("".join(e))
    except:
        break
