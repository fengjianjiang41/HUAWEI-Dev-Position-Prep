from collections import deque
def main():
    n,m=map(int,input().split())
    u,v,r,s=map(lambda x: int(x)-1,input().split())
    #-1是为了将坐标转换为从0开始的索引
    grid=[list(input()) for _ in range(n)]
    q=deque()
    q.append((u,v,0))
    while q:
        x,y,d=q.popleft()
        if (x,y)==(r,s):
            return d
        if x+1<n and grid[x+1][y]=='.':#不超过边界且可以向右走
            q.append((x+1,y,d+1))
            grid[x+1][y]='*'
        if x-1>=0 and grid[x-1][y]=='.':#不超过边界且可以向左走
            q.append((x-1,y,d+1))
            grid[x-1][y]='*'
        if y-1>=0 and grid[x][y-1]=='.':#不超过边界且可以向上走
            q.append((x,y-1,d+1))
            grid[x][y-1]='*'
        if y+1<n and grid[x][y+1]=='.':#不超过边界且可以向下走
            q.append((x,y+1,d+1))
            grid[x][y+1]='*'
        
    return -1  

print(main())
