#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string str;
    
    while(cin>>str)
    {
        int min=20;
        vector<int> Hash(26,0);
        for(int i=0;i<str.size();i++)
        {
            Hash[str[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(min>Hash[i]&&Hash[i]>0)
                min=Hash[i];
        }
        for(int i=0;i<str.size();i++)
        {
            if(Hash[str[i]-'a']!=min)
                cout<<str[i];
        }
        cout<<endl;
    }
    return 0;
}
