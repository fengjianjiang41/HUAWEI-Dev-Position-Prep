#include <iostream>
#include <queue>
#include <utility>
#include <vector>

using namespace std;

bool bfs(vector<string> &grid, int n, int m, int r, int c) {
  int cnt = 1;
  int rMin = r, rMax = r;
  int cMin = c, cMax = c;

  queue<pair<int, int>> q;
  q.emplace(r, c);
  grid[r][c] = '#';

  vector<int> dr{1, -1, 0, 0};
  vector<int> dc{0, 0, 1, -1};
  while (!q.empty()) {
    int len = q.size();
    for (int i = 0; i < len; i++) {
      auto [r, c] = q.front();
      q.pop();

      for (int j = 0; j < 4; j++) {
        int rj = r + dr[j];
        int cj = c + dc[j];
        if (rj >= 0 && rj < n && cj >= 0 && cj < m && grid[rj][cj] == '.') {
          cnt++;
          rMin = min(rMin, rj);
          rMax = max(rMax, rj);
          cMin = min(cMin, cj);
          cMax = max(cMax, cj);
          grid[rj][cj] = '#';
          q.emplace(rj, cj);
        }
      }
    }
  }

  return cnt == (rMax - rMin + 1) * (cMax - cMin + 1);
}

int main() {
  ios::sync_with_stdio(false), cin.tie(nullptr);

  int n, m;
  cin >> n >> m;

  vector<string> grid(n);
  for (int i = 0; i < n; i++) {
    cin >> grid[i];
  }

  int cnt = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (grid[i][j] == '.') {
        if (bfs(grid, n, m, i, j)) {
          cnt++;
        }
      }
    }
  }
  cout << cnt << "\n";
}
// 64 位输出请用 printf("%lld")
