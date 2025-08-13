#include <cmath>
#include <iostream>
using namespace std;

int main() {
    double x; cin >> x;
    int xi = floor(x); double r = x - xi;
    int res = r >= 0.5 ? xi+1 : xi;
    cout << res;

}
// 64 位输出请用 printf("%lld")
