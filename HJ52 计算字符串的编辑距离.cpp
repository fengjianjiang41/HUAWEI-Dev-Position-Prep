#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s1, s2;
    while (cin>>s1>>s2) {
        vector<vector<int>> dp(s1.size() + 1, vector<int>(s2.size()+1, 0));
        for (int i = 1; i <= s2.length(); i++) dp[0][i] = i;
        for (int i = 1; i <= s1.length(); i++) dp[i][0] = i;
        for (int i = 1;i <= s1.length(); i++){
            for (int j = 1; j <= s2.length(); j++){
                int min1 = min(dp[i-1][j], dp[i][j-1])+1;
                dp[i][j]  = min ((s1[i - 1] == s2[j - 1] ? 0 : 1) + dp[i-1][j-1],min1);
            }
        }
        cout << dp[s1.size()][s2.size()] << endl;
    }
}
// 64 位输出请用 printf("%lld")
