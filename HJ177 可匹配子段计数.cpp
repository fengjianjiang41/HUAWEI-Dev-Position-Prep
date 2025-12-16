#include<bits/stdc++.h>
using namespace std;
vector<int>vm;
unordered_map<int,int>mn;
int n,m,k;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        mn.clear();
        vm.clear();
        int count=0;
        scanf("%d %d %d",&n,&m,&k);
        int tmp;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&tmp);
            vm.push_back(tmp);
            
        }
        for(int j=0;j<m;j++)
        {
            scanf("%d",&tmp);
            mn[tmp]++;
        }
        int cnt=0;
        for(int i=0;i<vm.size();i++)
        {
              if(i>=m)
            {
                if(mn.find(vm[i-m])!=mn.end())
                {
                    if(mn[vm[i-m]]>=0)
                    cnt--;
                     mn[vm[i-m]]++;
                }
            }
            if(mn.find(vm[i])!=mn.end())
            {
               if(mn[vm[i]]>0)
               {
                   cnt++;
               }
               mn[vm[i]]--;
            }
          
            if(i>=m-1)
            {
                if(cnt>=k)count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
