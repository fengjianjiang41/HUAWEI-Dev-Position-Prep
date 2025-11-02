#include <iostream>
using namespace std;

int main()
 {
    long long n,k,x;
    cin>>n>>k>>x;
    if(k>=x*n-x+1&&k<=x*n+x-1)
    {
    int long long more = k -x*n+x-1;
        int long long lerf_more = more / 2;
        int long long right_more = more - lerf_more;
        cout << x - lerf_more << ' ' << n* x + right_more;
    }
    else cout<<-1;
}
// 64 位输出请用 printf("%lld")
