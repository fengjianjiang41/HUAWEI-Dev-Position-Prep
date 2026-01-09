#include <iostream>
#include <vector>
#include <bitset>
using namespace std;
int main() {
    int n(0);
    while (cin >> n) {
        //input
        vector<vector<int>> v(n, vector<int> (2, 0));
        v.reserve(20);
        for (int i = 0; i != n; i++) {
            cin >> v[i][0];
        }
        for (int i = 0; i != n; i++) {
            cin >> v[i][1];
        }
        //v[i][0]weight,v[i][1]number
        int maxweight(0);
        for (int i = 0; i != n; i++) {
            maxweight += v[i][1] * v[i][0];
        }
        bitset<200001> b;
        bitset<200001> w;
        b.set(0);
        //b.set(maxweight);
        for (int i = 0; i != n; i++) {
            for (int j = 0; j != v[i][1]; j++) {
                w = b << v[i][0];
                b = w | b;
                w.reset();

            }

        }
        cout << b.count();

    }
    return 0;
}
