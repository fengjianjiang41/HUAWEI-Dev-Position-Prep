#include <iostream>
using namespace std;

int main() {
    int l,r; cin >> l >> r;
    int res =  (r-l) / 2;
    if (r%2==0 || l%2==0) cout << res+1 ;
    else cout << res;
}
// 64 位输出请用 printf("%lld")