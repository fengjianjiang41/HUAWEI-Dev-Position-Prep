//MEOW MEOW MEWO
#include <bits/stdc++.h>

inline void run() {
    int n;
    std::cin >> n;

    std::vector <int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        a[i] = i;
    }

    do {
        for (int i = 1; i <= n; i++) {
            std::cout << a[i] << " \n"[i == n];
        }
    } while (next_permutation(a.begin() + 1, a.begin() + n + 1));
}

signed main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);

    int T = 1;
    // std::cin >> T;
    while (T--) run();

    return 0;
}
