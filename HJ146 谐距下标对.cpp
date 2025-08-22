#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    unordered_map<int, long long> countMap;
    for (int i = 0; i < n; ++i) {
        int key = a[i] - i;
        countMap[key]++;
    }

    long long result = 0;
    for (const auto& pair : countMap) {
        long long k = pair.second;
        result += k * (k - 1) / 2;
    }

    cout << result << endl;

    return 0;
}