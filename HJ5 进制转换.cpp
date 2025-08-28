#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main() {
    string s;
    while (cin >> s) {
        int bit = 0;
        int ans = 0;
        for (int i = s.length() - 1; i > 1; i--) {
            if (s[i] >= '0' && s[i] <= '9')
                ans += (s[i] - '0') * pow(16, bit++);
            else if (s[i] >= 'A' && s[i] <= 'F')
                ans += (s[i] - 'A' + 10) * pow(16, bit++);
        }
        cout << ans << endl;
    }
    return 0;
}
