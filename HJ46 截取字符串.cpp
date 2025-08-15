#include <iostream>
using namespace std;

int main() {
    string str; int k;
    while (cin>>str>>k) {
        cout << str.substr(0, k)<<endl;
    }
}
    
// 64 位输出请用 printf("%lld")
