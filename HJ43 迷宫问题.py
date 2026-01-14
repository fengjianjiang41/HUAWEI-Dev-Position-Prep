import sys
 
def print_result(path):
    for item in path:
        print('({},{})'.format(item[0], item[1]))
 
def min_path(maze, visited, path, m, n, i, j):
    if i >= m or j >= n or i < 0 or j < 0:
        return
    if visited[i][j]:
        return
    if maze[i][j] == 1:
        return
    if i == m-1 and j == n-1 and maze[i][j] == 0:
        path.append((i, j))
        print_result(path)
        return
 
    path.append((i, j))
    visited[i][j] = True
    min_path(maze, visited, path, m, n, i+1, j)
    min_path(maze, visited, path, m, n, i-1, j)
    min_path(maze, visited, path, m, n, i, j+1)
    min_path(maze, visited, path, m, n, i, j-1)
    path.pop()
#     visited[i][j] = False
 
def get_input():
    m, n = list(map(int, input().strip().split()))
 
    maze = []
    for i in range(m):
        row = list(map(int, input().strip().split()))
        maze.append(row)
 
    return maze, m, n
 
if __name__ == '__main__':
    try:
        while True:
            maze, m, n = get_input()
            row = [False for _ in range(n)]
            visited = [row.copy() for _ in range(m)]   
            path = []
            min_path(maze, visited, path, m, n, 0, 0)
    except Exception:
        pass
