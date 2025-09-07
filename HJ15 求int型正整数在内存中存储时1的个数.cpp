#include<bitset>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bitset<32>b(n);
    cout<<b.count()<<endl;
}


#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

int main()
{
    int a;
    cin>>a;
    int a2=0;
    vector<int> b;
    
    for (int i=0;i<1000;i++)
    {
        if(a<2)
        {
          b.push_back(a);
            a2++;
          break;
        }
        
        int a1=a%2;
        if (a1==1)
            a2++;
        b.push_back(a1);
        a=a/2;
    }
    
    cout<<a2<<endl;
    
    return 0;
}
