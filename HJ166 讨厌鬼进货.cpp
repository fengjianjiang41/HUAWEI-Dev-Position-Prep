#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    long long x;
    cin >> n >> x;
    
    vector<int> a(n);
    vector<int> b(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    long long total = 0;
    for (int i = 0; i < n; i++) {
        total += min(a[i], b[i]);
    }
    
    long long ans = min(total, x);
    cout << ans << endl;
    
    return 0;
}