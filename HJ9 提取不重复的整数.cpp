#include <iostream>
using namespace std;

int main() {
    int x; cin>>x;
    int res = 0;
    int arr[10] = {0};
    while (x>0){
        int temp = x % 10;
        x /= 10;
        if (arr[temp]==0) res = res * 10 + temp;
        arr[temp] = 1;
    }
    cout << res;
    return 0;
}
// 64 位输出请用 printf("%lld")


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num,n;
    vector<int> hash(10,0);
    cin>>n;
    while(n>0)
    {
        num=n%10;
        n/=10;
        if(hash[num]==0)
        {
            hash[num]=1;
            cout<<num;
        }
    }
 
    return 0;
}
