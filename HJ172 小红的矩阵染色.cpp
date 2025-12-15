#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int i,j,k,n,m,t,sort[1001] = {0}, sum = 0, num = 0;
    cin >> n>>m >>t;
    char s[1001][1001];
    for (i = 0; i < n; i++)
        cin >> s[i];
    for (i = 0; i < m; i++){
        int temp = 0;
        for (j = 0; j < n; j++){
            while (j < n && s[j][i] == 'o') temp++, j++;
            if (temp > 1) sort[temp]++;
            temp = 0;
        }
    }
    for (i = 1000; i > 1 && t > 1; i--){
        if (sort[i] != 0){
            if(sort[i]*i <=t) num += (i-1)*sort[i];
            else num += t - t/i - (t % i == 0 ? 0:1);
            t -= sort[i] * i;
        }
    }
    cout << num;

}
// 64 位输出请用 printf("%lld")
