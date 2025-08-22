#include <iostream>
using namespace std;

bool isComeposite(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return true;
        }
    }
    return false;
}
int main() {
    int x;
    cin >> x;
    for (int j = x; j <= 2 * x; j++) {
        if (isComeposite(j)) {
            cout << j;
            return 0;
        }
    }
    cout << -1;
}
// 64 位输出请用 printf("%lld")