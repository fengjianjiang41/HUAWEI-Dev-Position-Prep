#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string s;
    unordered_map<char, int> mp;
    while (cin>>s) {
        int n = s.size();
        for (int i = 0; i < n; i++) {
            mp[s[i]]++;
        }
        cout <<mp.size()<<endl;
    }
}
// 64 位输出请用 printf("%lld")
