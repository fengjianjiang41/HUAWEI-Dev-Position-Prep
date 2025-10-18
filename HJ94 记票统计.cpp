#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
    unordered_map<string,int> mp;
    vector<string> str;
    for(int i = 0;i<n;i++)
    {
        string temp;cin>>temp;
        mp[temp]=0;
        str.push_back(temp);
    }
    int m,invalid=0;
    cin>>m;
    for(int j = 0;j<m;j++)
    {
        string s;cin>>s;
        if(mp.find(s)==mp.end()) {invalid++;}
        else {mp[s]++;}
    }
    for(int i = 0;i<n;i++)
        cout<<str[i]<<" : "<<mp[str[i]]<<endl;
    cout<<"Invalid : "<<invalid<<endl;}
}HJ94 记票统计
