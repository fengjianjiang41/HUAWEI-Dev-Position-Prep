#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, x;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    for(int i = 0; i<n; i++){
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;
    return 0;
}
// 64 位输出请用 printf("%lld")