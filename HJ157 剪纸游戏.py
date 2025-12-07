import sys
from collections import deque


def main():
    data = sys.stdin.read().strip().splitlines()
    n, m = map(int, data[0].split())
    g = data[1 : 1 + n]  # 每行由 '.' / '*' 构成

    vis = [bytearray(m) for _ in range(n)]  # 访问标记省内存

    def bfs(sr, sc):
        q = deque([(sr, sc)])
        vis[sr][sc] = 1
        cnt = 1
        minr = maxr = sr
        minc = maxc = sc
        while q:
            r, c = q.popleft()
            if r < minr:
                minr = r
            if r > maxr:
                maxr = r
            if c < minc:
                minc = c
            if c > maxc:
                maxc = c

            if r + 1 < n and not vis[r + 1][c] and g[r + 1][c] == ".":
                vis[r + 1][c] = 1
                q.append((r + 1, c))
                cnt += 1
            if r - 1 >= 0 and not vis[r - 1][c] and g[r - 1][c] == ".":
                vis[r - 1][c] = 1
                q.append((r - 1, c))
                cnt += 1
            if c + 1 < m and not vis[r][c + 1] and g[r][c + 1] == ".":
                vis[r][c + 1] = 1
                q.append((r, c + 1))
                cnt += 1
            if c - 1 >= 0 and not vis[r][c - 1] and g[r][c - 1] == ".":
                vis[r][c - 1] = 1
                q.append((r, c - 1))
                cnt += 1
        return cnt, minr, maxr, minc, maxc

    ans = 0
    for i in range(n):
        row = g[i]
        for j in range(m):
            if row[j] == "." and not vis[i][j]:
                sz, r1, r2, c1, c2 = bfs(i, j)
                area = (r2 - r1 + 1) * (c2 - c1 + 1)
                if area == sz:  # 满外接矩形 ⇒ 该连通块是长方形
                    ans += 1
    print(ans)


if __name__ == "__main__":
    main()
