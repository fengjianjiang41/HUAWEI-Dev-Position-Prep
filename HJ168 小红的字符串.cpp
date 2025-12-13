#include <iostream>
using namespace std;
#include<algorithm>
int main() {
   string s;
   cin>>s;
   int i=0,j=s.size()-1,total=0;
   while(i<j)
   {
    if(s[i]!=s[j])
    {
        int dist=s[i]>s[j]?s[i]-s[j]:s[j]-s[i];
        total+=min({dist,26-dist});
    }
    i++;
    j--;
   }
   cout<<total;
}
// 64 位输出请用 printf("%lld")
