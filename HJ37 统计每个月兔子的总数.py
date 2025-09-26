while True:
    try:
        n = int(input())
        num = 0
        num1 = 0
        num2 = 0
        for i in range(n):
            num += num2
            num2 = num1
            if num == 0 and num2 == 0:
                num1 = 1
            elif num == 0 and num2 == 1:
                num1 = 0
            else:
                num1 = num
        print(num + num1 + num2)

    except:
        break
