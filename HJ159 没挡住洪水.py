import sys
from collections import deque

N = int(input())
grid = [sys.stdin.readline().strip() for _ in range(N)]
visit = [[False] * N for _ in range(N)]
dirs = [(-1, 0), (1, 0), (0, -1), (0, 1)]
ans = 0

for i in range(N):
    for j in range(N):
        if grid[i][j] == "#" and not visit[i][j]:
            q = deque([(i, j)])
            visit[i][j] = True
            has_insterior = False
            while q:
                x, y = q.popleft()
                all4 = True
                for dx, dy in dirs:
                    xp, yp = x + dx, y + dy
                    in_bounds = 0 <= xp < N and 0 <= yp < N
                    if not in_bounds or grid[xp][yp] != "#":
                        all4 = False
                    elif not visit[xp][yp]:
                        q.append((xp, yp))
                        visit[xp][yp] = True
                if all4:
                    has_insterior = True
            if not has_insterior:
                ans += 1
print(ans)
