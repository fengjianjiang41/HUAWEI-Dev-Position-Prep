#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string in_str;
    getline(cin, in_str);
    char al; cin >> al;
    int count_al = 0;

    for (int i = 0; i < in_str.size(); i++) {
        if (isalpha(in_str[i])) {
            if (isupper(in_str[i])) in_str[i]=tolower(in_str[i]);
        }
        if (isupper(al)) al=tolower(al);
        if (in_str[i]==al) count_al++;
    }

    cout << count_al << endl;
}
// 64 位输出请用 printf("%lld")
