#include <iostream>
using namespace std;
char a[110][110];
int n,m;
int ans=0;

int dx[] = {0,0,1,1,-1,-1,1,-1};
int dy[] = {1,-1,1,-1,1,-1,0,0};

void dfs(int i, int j){
    a[i][j]='.';
    for (int k = 0; k < 8; k++){
        int nx = i+dx[k];
        int ny = j+dy[k];

        if (nx < 0 || nx > n-1 || ny < 0 || ny > m - 1) continue;
        if (a[nx][ny] == 'W') dfs(nx, ny);
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i< n; i++){
        cin>>a[i];
    }
    for (int i = 0; i<n;i++){
        for (int j = 0; j<m;j++){
            if(a[i][j]=='W'){
                ans++;
                dfs(i,j);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
// 64 位输出请用 printf("%lld")
