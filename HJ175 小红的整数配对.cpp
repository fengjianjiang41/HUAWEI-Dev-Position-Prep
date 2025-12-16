#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    // 排序数组，为贪心配对做准备
    sort(a.begin(), a.end());
    
    long long max_score = 0;
    int i = n - 1;
    while (i > 0) {
        // 尝试配对当前最大数与前一个数（贪心选大值）
        if (a[i] - a[i - 1] <= k) {
            max_score += 1LL * a[i] * a[i - 1];
            i -= 2; // 配对后移除这两个数
        } else {
            i--; // 无法配对，尝试前一个数
        }
    }
    
    cout << max_score << endl;
    return 0;
}
