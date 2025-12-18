import sys

while True:
    try:
        # 读取N和m
        line = sys.stdin.readline().strip()
        if not line:
            break
        N, m = map(int, line.split())
        
        # 初始化v和s数组
        v = [[0] * 3 for _ in range(m + 1)]
        s = [[0] * 3 for _ in range(m + 1)]
        
        for i in range(1, m + 1):
            o, p, q = map(int, sys.stdin.readline().split())
            o //= 10
            
            if q == 0:  # 主件
                v[i][0] = o
                s[i][0] = o * p
            else:  # 附件
                if v[q][1] == 0:  # 第一个附件
                    v[q][1] = o
                    s[q][1] = o * p
                else:  # 第二个附件
                    v[q][2] = o
                    s[q][2] = o * p
        
        N //= 10
        dp = [0] * (N + 1)
        
        for i in range(1, m + 1):
            if v[i][0]:  # 如果是主件
                for j in range(N, 0, -1):
                    # 只买主件
                    if j >= v[i][0]:
                        dp[j] = max(dp[j], dp[j - v[i][0]] + s[i][0])
                    
                    # 主件+附件1
                    if v[i][1] and j >= v[i][0] + v[i][1]:
                        dp[j] = max(dp[j], dp[j - v[i][0] - v[i][1]] + s[i][0] + s[i][1])
                    
                    # 如果有附件2
                    if v[i][2]:
                        # 主件+附件2
                        if j >= v[i][0] + v[i][2]:
                            dp[j] = max(dp[j], dp[j - v[i][0] - v[i][2]] + s[i][0] + s[i][2])
                        
                        # 主件+附件1+附件2
                        if j >= v[i][0] + v[i][1] + v[i][2]:
                            dp[j] = max(dp[j], dp[j - v[i][0] - v[i][1] - v[i][2]] + s[i][0] + s[i][1] + s[i][2])
        
        print(dp[N] * 10)
        
    except EOFError:
        break
