def can_reach_end_dfs(n, m, maze):
    """
    使用DFS判断是否能从左上角(1,1)到达右下角(n,m)
    :param n: 迷宫的行数
    :param m: 迷宫的列数  
    :param maze: 迷宫矩阵，'.'表示空地，'#'表示墙
    :return: True表示可以到达，False表示不能到达
    """
    # 检查起点和终点是否都是空地
    if maze[0][0] == '#' or maze[n-1][m-1] == '#':
        return False
    
    # 四个方向：上、右、下、左
    directions = [(-1, 0), (0, 1), (1, 0), (0, -1)]
    
    # 访问标记数组
    visited = [[False] * m for _ in range(n)]
    
    def dfs(x, y):
        # 如果越界或者是墙，返回False
        if x < 0 or x >= n or y < 0 or y >= m or maze[x][y] == '#' or visited[x][y]:
            return False
        
        # 标记当前位置已访问
        visited[x][y] = True
        
        # 如果到达终点，返回True
        if x == n-1 and y == m-1:
            return True
        
        # 探索四个方向
        for dx, dy in directions:
            if dfs(x + dx, y + dy):
                return True
        
        return False
    
    # 从起点开始DFS
    return dfs(0, 0)

def main():
    # 读取输入
    n, m = map(int, input().split())
    maze = []
    
    for _ in range(n):
        line = input().strip()
        maze.append(list(line))
    
    # 使用DFS判断是否可以到达终点
    if can_reach_end_dfs(n, m, maze):
        print("Yes")
    else:
        print("No")

if __name__ == "__main__":
    main()
