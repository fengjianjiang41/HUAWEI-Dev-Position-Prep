#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Fan {
    int support;
    int favorite;
    int id;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;

    vector<Fan> fans(n);
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        fans[i] = {x + 2 * y, y, i + 1};
    }

    sort(fans.begin(), fans.end(), [](const Fan & a, const Fan & b) {
        if (a.support != b.support) {
            return a.support > b.support;
        }
        if (a.favorite != b.favorite) {
            return a.favorite > b.favorite;
        }
        return a.id < b.id;
    });
    
    vector<int> result;
    for (int i = 0; i < k; ++i) {
        result.push_back(fans[i].id);
    }

    // 按编号升序排序
    sort(result.begin(), result.end());

    // 输出结果
    for (int i = 0; i < k; ++i) {
        if (i > 0) {
            cout << " ";
        }
        cout << result[i];
    }
    cout << endl;
}
// 64 位输出请用 printf("%lld")
