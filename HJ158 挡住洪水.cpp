#include <iostream>
#include <vector>
using namespace std;
int x, y;
char pos[500][500];
void DFS(int a, int b) {
    if (a < 1 || b < 1 || a > x || b > y || pos[a][b] == '*') return;
    pos[a][b] = '*';
    DFS(a - 1, b);
    DFS(a, b - 1);
    DFS(a + 1, b);
    DFS(a, b + 1);
}
int main() {
    cin >> x >> y;
    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= y; j++) {
            cin >> pos[i][j];
        }
    }
    for (int i = 1; i <= x; i++) {
        if (pos[i][1] == '0') DFS(i, 1);
        if (pos[i][y] == '0') DFS(i, y);
    }
    for (int j = 1; j <= y; j++) {
        if (pos[1][j] == '0') DFS(1, j);
        if (pos[x][j] == '0') DFS(x, j);
    }
    int ans = 0;
    for (int i = 2; i <= x-1; i++) {
        for (int j = 2; j <= y-1; j++) {
            if (pos[i][j] == '0') ans++;
        }
    }
    cout << ans;
    return 0;

}
// 64 位输出请用 printf("%lld")
