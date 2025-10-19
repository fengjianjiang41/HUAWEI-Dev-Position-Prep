#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    while(cin>>s){
        for(int i=0;i<s.length();i++){
            if(s[i]>='0'&&s[i]<='9'&&(i==0||s[i-1]<'0'||s[i-1]>'9')){
               s=s.substr(0,i)+"*"+s.substr(i);
               i++;
            }
            if(s[i]>='0'&&s[i]<='9'&&(i+1==s.length()||s[i+1]<'0'||s[i+1]>'9')){
               s=s.substr(0,i+1)+"*"+s.substr(i+1);
               i++;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
