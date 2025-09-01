#include <iostream>
#include <string>
using namespace std;

int main() {
    int data;
    string str;
    cin>>data;
    str = to_string(data);
    string::reverse_iterator it;
    for (it=str.rbegin(); it!=str.rend(); it++) {
        cout<<*it;
    }

}
// 64 位输出请用 printf("%lld")
