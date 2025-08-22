#include <iostream>
using namespace std;

int main() {

    int l, r, x;

    std::cin >> l >> r >> x;

    if (l % x == 0) {
        std::cout << l;
    } else {
        int possible = l - l % x + x;
        if (possible <= r) {
            std::cout << possible;
        } else {
            std::cout << -1;
        }

    }

}
// 64 位输出请用 printf("%lld")