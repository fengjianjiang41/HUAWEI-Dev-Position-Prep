#include <bits/stdc++.h>
 
using namespace std;
 
struct Node {
    int id;
    int grade;
};
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m;
    cin >> n >> m;
    int t = (int)floor(1.5 * m);
    vector<Node> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i].id >> vec[i].grade;
    }
    sort(vec.begin(), vec.end(), [&](const Node & l, const Node & r) {
        if (l.grade == r.grade) {
            return l.id < r.id;
        }
        return l.grade > r.grade;
    });
    int temp = min(t, n);
    int length = (int)count_if(vec.begin(), vec.end(), [&](const Node & node) {
        return node.grade >= vec[temp-1].grade;
    });
    cout << vec[temp-1].grade << ' ' << length << '\n';
    for (int i = 0; i < length; ++i) {
        cout << vec[i].id << ' ' << vec[i].grade << '\n';
    }
    return 0;
}
// 64 位输出请用 printf("%lld")
