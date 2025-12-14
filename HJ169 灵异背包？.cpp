#include <iostream>
using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int leastOdd = 0, total = 0;
    int temp;
    while (cin >> temp) {
        if (temp % 2 != 0) {
            if (!leastOdd) leastOdd = temp;
            else leastOdd = leastOdd < temp ? leastOdd : temp;
        }
        total += temp;
    }
    if (total%2!=0) total-=leastOdd;
    cout << total;
}
// 64 位输出请用 printf("%lld")
