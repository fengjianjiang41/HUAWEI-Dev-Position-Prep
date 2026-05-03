#include<iostream>
using namespace std;
int main(){
    string s;
    int n;
    string result;
    while(cin>>s>>n){
        float r=0;
        if(n==s.size()) cout<<s<<endl;
        for(int i=0;i<s.size()-n;i++){
            string temp=s.substr(i,n);
            int count=0;
            for(int k=0;k<n;k++){
              if(temp[k]=='G'||temp[k]=='C') count++;
            }
            if(r<(float)count/(float)n){
                r=(float)count/(float)n;
                //result="";
                result=temp;
            }
         }
        cout<<result;
    }
    return 0;
}
