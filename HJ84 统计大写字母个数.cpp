#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    while(cin>>str)
    {
        int ans=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]>='A'&&str[i]<='Z')
                ans++;
        }
        cout<<ans<<endl;
    }

    return 0;
}
