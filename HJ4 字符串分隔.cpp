#include <iostream>
using namespace std;

int main() {
    string s; cin >> s;
    int length = s.length();
    int step = 0;
    while (length>8) {
        for (int i = 0; i < 8; i++) {
            cout << s[step*8+i];
        }
        cout << endl;
        step++;
        length-=8;
    }
    for (int i = 0; i < 8; i++) {
        if (i < length) cout << s[step*8+i];
        else cout << "0";
    }
}
// 64 位输出请用 printf("%lld")
