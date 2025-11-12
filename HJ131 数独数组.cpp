#include <ios>
#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0);
    int x,n;
    array<int, 9> a{0};
    cin >>n;
    for (int i = 0; i < n; i++){
        cin >> x;
        a[x-1]++;
    }
    sort(a.begin(), a.end());
    if (a[8]-a[0]>1)
        cout << "NO";
        else cout << "YES";
}
// 64 位输出请用 printf("%lld")
