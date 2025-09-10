#include <bits/stdc++.h>
#include <cctype>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string s, st;
    long long a, b;
    getline(cin, s);
    vector<string>vs;
    stringstream ss(s);
    while (getline(ss, st, ','))
        vs.push_back(st);
    a = stoll(vs[1]);
    b = stoll(vs[3]);
    cout << b - a - 1;
    return 0;
}
// 64 位输出请用 printf("%lld")
