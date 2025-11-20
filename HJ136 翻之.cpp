#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<string> col(m, string(n, '0'));
    for (int i = 0; i < n; ++i) {
        string s; 
        cin >> s;
        for (int j = 0; j < m; ++j) col[j][i] = s[j];
    }
    sort(col.begin(), col.end());
    int ans = 0;
    for (int i = 0; i < m; ) {
        int j = i;
        while (j < m && col[j] == col[i]) ++j;
        ans = max(ans, j - i);
        i = j;
    }
    cout << ans << '\n';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T = 1;
    while (T--) {
        solve();
    }
    return 0;
}
