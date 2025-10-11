def f(m, n):
    if m==0 or n ==1:
        return 1
    if m < n:
        return f(m,m)
    else:
        return f(m,n-1)+f(m-n, n)

while True:
    try:
        m,n = map(int, input().split())
        print(f(m,n))
    except:
        break
