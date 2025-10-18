#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n)
    {
        cin>>m;
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        dp[0][0]=1;
        for(int i=1;i<=m;i++) dp[0][i]=dp[0][i-1];
        for(int j=1;j<=n;j++) dp[j][0]=dp[j-1][0];
       for(int i=1;i<=n;i++)
           for(int j=1;j<=m;j++)
           {
               dp[i][j]=dp[i][j-1]+dp[i-1][j];
           }
        cout<<dp[n][m]<<endl;
    }
}
