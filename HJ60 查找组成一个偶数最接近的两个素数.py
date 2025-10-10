def isPrime(n):
    for i in range(2, int(pow(n, 0.5) + 1)):
        if n % i == 0:
            return False
    return True


while True:
    try:
        num = int(input())
        res = []
        j = num // 2
        while j >= 2:
            if isPrime(j) and isPrime(num - j):
                res = [j, num - j]
                break
            j -= 1
        print(res[0])
        print(res[1])
    except:
        break
