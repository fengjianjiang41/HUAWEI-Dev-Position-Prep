#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sq = n * n;
    for (int i = 0; i < n - 1; i++) {
        cout << sq - n + 1 + 2 * i << "+";
    }
    cout << sq + n - 1;
    return 0;
}
// 64 位输出请用 printf("%lld")
