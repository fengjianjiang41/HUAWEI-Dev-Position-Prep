#include <iostream>
using namespace std;

int main() {
    int n; cin>>n;
    for (int i = 1; i <= n; i++){
        for (int j = 0; j <= n-i-1; j++){
            cout << (i+j)*(i+j-1)/2+1+j << " ";
        }
        cout << n*(n-1)/2+1+n-i << endl;
    }
}
// 64 位输出请用 printf("%lld")
