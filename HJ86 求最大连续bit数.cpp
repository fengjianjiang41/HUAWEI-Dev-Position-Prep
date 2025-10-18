#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        int maxlen=0,count=0;
        while(n!=0){
            if(n%2==1) {
                count++;
                maxlen=maxlen>count?maxlen:count;
            }
            else{
                count=0;
            }
            n=n/2;
        }
        cout<<maxlen<<endl;
    }
    return 0;
}
