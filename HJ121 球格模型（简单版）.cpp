#include<bits/stdc++.h>
using namespace std;
void solve() {
	int n,m,k;
	cin>>n>>m>>k;
	if(k<max(n,m)) cout<<-1;
	else {
		k-=max(n,m);
		if(n>m) {
			cout<<1+k<<" ";
			for(int i=1;i<=n;i++) {
				for(int j=1;j<=m;j++) {
					if(i==1 && j==1) continue;
					if(i==j || (i>m && j==1)) cout<<"1 ";
					else cout<<"0 ";
				}
				cout<<"\n";
			}
		}
		else {
			cout<<1+k<<" ";
			for(int i=1;i<=n;i++) {
				for(int j=1;j<=m;j++) {
					if(i==1 && j==1) continue;
					if(i==j || (j>n && i==1)) cout<<"1 ";
					else cout<<"0 ";
				}
				cout<<"\n";
			}
		}
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	int _=1;
//	cin>>_;
	while(_--) solve();
	return 0;
}
