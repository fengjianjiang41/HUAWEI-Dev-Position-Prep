#include <iostream>
using namespace std;

int main() {
    long long a, b,x;
    cin >> a >> b >> x;
    long long money;
    if (3*a <= b) money = a* x;
    else{
        long long group = x/3;
        long long remain = x % 3;
        long long rmoney=min(remain*a,b);
        money=group*b+rmoney;
    }
    cout<<money;
}
// 64 位输出请用 printf("%lld")
