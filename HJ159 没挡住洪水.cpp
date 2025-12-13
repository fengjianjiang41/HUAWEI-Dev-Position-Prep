#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;
    vector<string> g(n);
    for (int i = 0; i < n; ++i) cin >> g[i];

    vector<vector<int>> vis(n, vector<int>(n, 0));
    const int dx[4] = {1, -1, 0, 0};
    const int dy[4] = {0, 0, 1, -1};

    long long ans = 0;
    queue<pair<int, int>> q;

    auto inb = [&](int x, int y) {
        return 0 <= x && x < n && 0 <= y && y < n;
    };

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (g[i][j] == '#' && !vis[i][j]) {
                bool hasInterior = false;
                vis[i][j] = 1;
                q.push(make_pair(i, j));
                while (!q.empty()) {
                    auto cur = q.front();
                    q.pop();
                    int x = cur.first, y = cur.second;
                    bool all4 = true;
                    for (int d = 0; d < 4; ++d) {
                        int nx = x + dx[d], ny = y + dy[d];
                        if (!inb(nx, ny) || g[nx][ny] != '#') {
                            all4 = false;
                        }
                    }
                    if (all4) hasInterior = true;
                    for (int d = 0; d < 4; ++d) {
                        int nx = x + dx[d], ny = y + dy[d];
                        if (inb(nx, ny) && g[nx][ny] == '#' && !vis[nx][ny]) {
                            vis[nx][ny] = 1;
                            q.push(make_pair(nx, ny));
                        }
                    }
                }
                if (!hasInterior) ++ans;
            }
        }
    }

    cout << ans << "\n";
    return 0;
}
