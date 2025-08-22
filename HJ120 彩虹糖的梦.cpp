#include <iostream>
using namespace std;
#include<vector>
#include<functional>

int main() {
    int a1, a2, a3, a4, a5, a6 ,a7;
    cin>>a1>>a2>>a3>>a4>>a5>>a6>>a7;
    vector<int>v;
    v.push_back(a1);
    v.push_back(a2);
    v.push_back(a3);
    v.push_back(a4);
    v.push_back(a5);
    v.push_back(a6);
    v.push_back(a7);
    sort(v.begin(), v.end());
    cout<<v[0]<<endl;
    return 0;
    
}
// 64 位输出请用 printf("%lld")