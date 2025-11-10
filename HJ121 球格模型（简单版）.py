n, m, k = map(int,input().split())

min_num = max(n,m)
if k < min_num:
    print(-1)
else:
    for i in range(n):
        res = ['0'] * m
        if n < m:
            res[i] = '1'
            if i == n - 1:
                res[i:] = ['1'] * (m - n + 1)
                res[i] = str(k - m + 1)
        else:
            res[i % m] = '1'
            if i == n -1:
                res[i % m] = str(k - n + 1)  
        print(' '.join(res))

