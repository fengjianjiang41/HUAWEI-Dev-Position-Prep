#include<stdio.h>
#include<algorithm>
#include<vector>
//#include<windows.h>
using namespace std;
int fan(vector<int>);
int main()
{
	int N;
	for(;scanf("%d",&N)!=EOF;)
	{
		vector<int> a;
		for(;N--;)
		{
			int t;
			scanf("%d",&t);
			a.push_back(t);
		}
		printf("%d\n",fan(a));
	}
}

int fan(vector<int> x)
{
	int i,N,w,Max=0;
	N=x.size();
	vector<int> dp1(N),dp2(N),help;
	for(i=0;i<N;i++)
	{
		w=lower_bound(help.begin(),help.end(),x[i])-help.begin();
		dp1[i]=w+1;
		if(w<help.size()) help[w]=x[i];
		else help.push_back(x[i]);
	}
	help.clear();
	for(i=N-1;i>=0;i--)
	{
		w=lower_bound(help.begin(),help.end(),x[i])-help.begin();
		dp2[i]=w+1;
		if(w<help.size()) help[w]=x[i];
		else help.push_back(x[i]);
	}
	for(i=0;i<N;i++)
	{
		int zong;
		zong=dp1[i]+dp2[i]-1;
		Max=max(Max,zong);
	}
	return N-Max;
}
