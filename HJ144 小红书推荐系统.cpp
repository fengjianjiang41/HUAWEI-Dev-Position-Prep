#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    unordered_map<string, int> mp;
    while (cin>>s) mp[s]++;

    vector<pair<string, int>> vec;
    for (auto & [k, v]:mp) {
        if (v >= 3) vec.push_back({k,v});
    }
    sort(vec.begin(), vec.end(), [](const auto & a, const auto & b){
        if (a.second != b.second) return a.second > b.second;
        return a.first < b.first;
    });
    for (auto& [k, v] : vec) cout << k << '\n';
    return 0;
}
// 64 位输出请用 printf("%lld")
