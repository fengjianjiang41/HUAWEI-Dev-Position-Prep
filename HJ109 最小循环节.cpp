#include <iostream>
using namespace std;
int a[58];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        
        a[s[i]-'A']++;
    }
    int count=0;
    for(int i=0;i<58;i++){
        if(a[i]>0){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
    
}
// 64 位输出请用 printf("%lld")
