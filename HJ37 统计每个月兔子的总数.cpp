#include <iostream>
using namespace std;

int main() {
    int month;
    cin >> month;
    int n1 = 1;
    int n2 = 0;
    int n3 = 0;
    for (int i = 1; i < month; i++) {
        n3 += n2;
        n2 = n1;
        n1 = n3;
    }
    cout << n1 + n2 + n3;
}
// 64 位输出请用 printf("%lld")
