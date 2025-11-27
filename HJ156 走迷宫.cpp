#include <iostream>
#include<cstdlib>
#include<cstdio>
#include<iterator>
#include<queue>
#include<vector>
using namespace std;

static const auto io_sync_off = []() {
    std::ios::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);
    return nullptr;
}
();
int main() {
    int n, m;
    cin >> n >> m;
    char grap[n][m];
    int sx, sy, ex, ey;
    cin >> sx >> sy >> ex >> ey;
    sx--;
    sy--;
    ex--;
    ey--;
    for (int i = 0; i < n; i++) {
        cin >> grap[i];
    }
    queue<pair<int, int>> pos;
    pos.push({sx, sy});
    int count = 0;
    if (grap[ex][ey] != '*') {
        while (!pos.empty()) {
            int nl = pos.size();
            for (int i = 0; i < nl; i++) {
                auto xy = pos.front();
                int x = xy.first, y = xy.second;
                if (x == ex && y == ey) {
                    cout << count;
                    return 0;
                }
                pos.pop();
                if (x - 1 >= 0 && grap[x - 1][y] == '.') {
                    pos.push({x - 1, y});
                    grap[x - 1][y] = '*';
                }
                if (x + 1 < n && grap[x + 1][y] == '.' ) {
                    pos.push({x + 1, y});
                    grap[x + 1][y] = '*';
                }
                if (y - 1 >= 0 && grap[x][y - 1] == '.' ) {
                    pos.push({x, y - 1});
                    grap[x][y - 1] = '*';
                }
                if (y + 1 < m && grap[x][y + 1] == '.' ) {
                    pos.push({x, y + 1});
                    grap[x][y + 1] = '*';
                }
            }
            count++;
        }
    }
    cout << -1;
    return 0;
}

// 64 位输出请用 printf("%lld")
