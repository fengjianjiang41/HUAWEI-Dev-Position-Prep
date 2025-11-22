#include <iostream>
#include <unordered_map>
using namespace std;

void solve(){
    int n;
    cin >> n;
    unordered_map<string, int> mp;
    unordered_map<string, int> r;
    int ans = 0;
    for (int i = 0; i < n; i++){
        string s;
        cin>>s;
        if (mp[s]<ans+1){
            mp[s]++;
            if(r[s]==1)continue;
            if(mp[s]==ans+1)
            {
                ans++;
                r[s]=1;
            }
        }
    }
    cout << ans <<endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
// 64 位输出请用 printf("%lld")
