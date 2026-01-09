#include <bitset>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n(0);
    while (cin >> n) {
        vector<vector<int>> v(n, vector<int>(2, 0));
        v.reserve(20);
        for (int i = 0; i != n; i++) {
            cin >> v[i][0];
        }
        for (int i = 0; i != n; i++) {
            cin >> v[i][1];
        }
        int maxweight(0);
        for (int i = 0; i != n; i++) {
            maxweight += v[i][1] * v[i][0];
        }
        bitset<200001> b;
        bitset<200001> w;
        b.set(0);
        for (int i = 0; i != n; i++) {
            for (int j=0; j != v[i][1]; j++) {
                w = b << v[i][0];
                b = w | b;
                w.reset();
            }
        }
        cout << b.count();
    }
}
// 64 位输出请用 printf("%lld")
