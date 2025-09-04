#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main() {
    vector<string> vecs;
    string s;
    while (cin>>s) {
        vecs.push_back(s);
    }
    reverse(vecs.begin(), vecs.end());

    for(int i = 0; i < vecs.size(); i++) {
        cout << vecs[i] << " ";
    }
 
    return 0;
}
// 64 位输出请用 printf("%lld")
