#include<bits/stdc++.h>
using namespace std;
void solve() {
	int n;
	cin>>n;
	string s;
	cin>>s;
	s=s+s;
	vector<int>pos(26,-1);
	int ans=n-1;
	for(int i=0;i<s.size();i++) {
		if(pos[s[i]-'a']!=-1) ans=min(ans,i-pos[s[i]-'a']-1);
		pos[s[i]-'a']=i;
	}
	if(ans>=n-1) cout<<-1<<"\n";
	else cout<<ans<<"\n";
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	int _=1;
	cin>>_;
	while(_--) solve();
	return 0;
}
