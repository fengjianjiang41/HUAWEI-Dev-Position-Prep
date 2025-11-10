#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int computeMin(int n, int m) {
    for (int i = 0; i < m; ++i) {
        if (n <= 1) {
            n -= (m - i);
            break;
        }
        int sqrt_n = ceil(sqrt(n));
        int div2_n = ceil(n / 2.0);
        int next_n = min({sqrt_n, div2_n, n - 1});
        if (next_n >= n) {
            n -= (m - i);
            break;
        }
        n = next_n;
    }
    return n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        cout << computeMin(n, m) << '\n';
    }
    return 0;
}
