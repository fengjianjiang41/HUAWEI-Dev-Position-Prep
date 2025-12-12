import sys

n, m = map(int, input().split())
grid = [list(input()) for _ in range(n)]


def DFS(a, b):
    if a < 0 or b < 0 or a > n - 1 or b > m - 1 or grid[a][b] == "*":
        return
    grid[a][b] = "*"
    DFS(a - 1, b)
    DFS(a, b - 1)
    DFS(a + 1, b)
    DFS(a, b + 1)


for i in range(n):
    if grid[i][0] == "0":
        DFS(i, 0)
    if grid[i][m - 1] == "0":
        DFS(i, m - 1)
for j in range(m):
    if grid[0][j] == "0":
        DFS(0, j)
    if grid[n - 1][j] == "0":
        DFS(n - 1, j)
count = 0
for i in range(1, n-1):
    for j in range(1, m-1):
        if grid[i][j] == "0":
            count += 1
print(count)
