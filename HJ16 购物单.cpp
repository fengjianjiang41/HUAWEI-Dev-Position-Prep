#include <iostream>
#include <vector>
using namespace std;
int N,m;
int main(){
    while(cin>>N>>m){
        vector<vector<int>> v(m+1,vector<int>(3,0));
        vector<vector<int>> s(m+1,vector<int>(3,0));
        int o,p,q;
        for(int i=1;i<=m;i++){
            cin>>o>>p>>q;
            o/=10;
            if(!q){
                v[i][0]=o;
                s[i][0]=o*p;
            }else{
                if(!v[q][1]){
                    v[q][1]=o;
                    s[q][1]=o*p;
                }else{
                    v[q][2]=o;
                    s[q][2]=o*p;
                }
            }
        }
        N/=10;
        vector<int> dp(N+1,0);
        for(int i=1;i<=m;i++){
            if(v[i][0]){
                for(int j=N;j>0;--j){
                    if(j>=v[i][0]){
                        dp[j]=max(dp[j],dp[j-v[i][0]]+s[i][0]);
                    }
                    if(v[i][1]&&j>=v[i][0]+v[i][1]){
                        dp[j]=max(dp[j],dp[j-v[i][0]-v[i][1]]+s[i][0]+s[i][1]);
                    }
                    if(v[i][2]){
                        if(j>=v[i][0]+v[i][2]){
                            dp[j]=max(dp[j],dp[j-v[i][0]-v[i][2]]+s[i][0]+s[i][2]);
                        }
                        if(j>=v[i][0]+v[i][1]+v[i][2]){
                            dp[j]=max(dp[j],dp[j-v[i][0]-v[i][1]-v[i][2]]+s[i][0]+s[i][1]+s[i][2]);
                        }
                    }
                }
            }
        }
        cout<<dp[N]*10<<endl;
    }
}
