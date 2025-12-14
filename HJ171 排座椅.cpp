#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 定义结构体存储通道位置和对应的价值（隔开的对数）
struct Channel {
    int pos;    // 通道位置（行/列索引）
    int count;  // 能隔开的同学对数量
};

// 排序规则：价值降序，价值相同时位置升序
bool cmp(const Channel& a, const Channel& b) {
    if (a.count != b.count) {
        return a.count > b.count;
    }
    return a.pos < b.pos;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k, l, d;
    cin >> n >> m >> k >> l >> d;

    // 初始化横向和纵向通道的价值（初始为0）
    vector<Channel> horizontal(n - 1);  // 横向通道：位置1~n-1
    vector<Channel> vertical(m - 1);    // 纵向通道：位置1~m-1
    for (int i = 0; i < n - 1; ++i) {
        horizontal[i].pos = i + 1;
        horizontal[i].count = 0;
    }
    for (int i = 0; i < m - 1; ++i) {
        vertical[i].pos = i + 1;
        vertical[i].count = 0;
    }

    // 统计每个通道位置的价值
    for (int i = 0; i < d; ++i) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if (x1 == x2) {  // 左右相邻，属于纵向通道
            int col = min(y1, y2);  // 通道位置在较小列和较大列之间
            vertical[col - 1].count++;
        } else {  // 上下相邻，属于横向通道
            int row = min(x1, x2);  // 通道位置在较小行和较大行之间
            horizontal[row - 1].count++;
        }
    }

    // 按规则排序：价值降序，位置升序
    sort(horizontal.begin(), horizontal.end(), cmp);
    sort(vertical.begin(), vertical.end(), cmp);

    // 选择前k个横向通道，排序后输出
    vector<int> selected_h;
    for (int i = 0; i < k; ++i) {
        selected_h.push_back(horizontal[i].pos);
    }
    sort(selected_h.begin(), selected_h.end());
    for (int i = 0; i < k; ++i) {
        cout << selected_h[i] << (i == k - 1 ? "\n" : " ");
    }

    // 选择前l个纵向通道，排序后输出
    vector<int> selected_v;
    for (int i = 0; i < l; ++i) {
        selected_v.push_back(vertical[i].pos);
    }
    sort(selected_v.begin(), selected_v.end());
    for (int i = 0; i < l; ++i) {
        cout << selected_v[i] << (i == l - 1 ? "\n" : " ");
    }

    return 0;
}
