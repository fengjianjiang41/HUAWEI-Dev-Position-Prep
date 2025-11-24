from collections import deque
from re import split
import sys

n, m = map(int, input().split())
grid = [list(input()) for _ in range(n)]
vis = [[False] * m for _ in range(n)]

cnt = 0
dirs = [(1,0), (-1,0), (0,1), (0,-1), (1, 1), (1, -1), (-1, 1), (-1, -1)]

def bfs(x, y):
    q = deque([(x, y)])
    while q:
        x, y = q.popleft()
        for dx, dy in dirs:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < m and not vis[nx][ny] and grid[nx][ny] == 'W':
                q.append((nx, ny))
                vis[nx][ny] = True


for i in range(n):
    for j in range(m):
        if grid[i][j] == 'W' and not vis[i][j]:
            cnt += 1
            bfs(i, j)
print(cnt)

    
            

