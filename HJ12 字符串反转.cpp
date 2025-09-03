#include <iostream>
using namespace std;

int main() {
    string s;
    while (cin>>s) {
        string::reverse_iterator it;
        for (it = s.rbegin(); it != s.rend(); it++) {
            cout<<*it;
        }
    }
}
// 64 位输出请用 printf("%lld")

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s("");
    getline(cin, s);
    reverse(s.begin(), s.end());
    cout << s.c_str() << endl;
    return 0;
}
