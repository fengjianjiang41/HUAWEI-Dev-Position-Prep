#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    string str;
    while (cin>>str) {
        string res;
        unordered_map<char, int> hash;
        for (int i =0; i < str.length();i++) {
            hash[str[i]]++;
        }
        vector<pair<char,int>> v;
        for (auto it: hash) {
            v.push_back({it.first,it.second});
        }
        sort(v.begin(), v.end(), [](auto & a, auto & b){return a.second>b.second || (a.second==b.second&&a.first<b.first);});
        for (auto it: v){
            res+=it.first;
        }
        cout <<res<<endl;
    }
}
// 64 位输出请用 printf("%lld")HJ102 字符统计
