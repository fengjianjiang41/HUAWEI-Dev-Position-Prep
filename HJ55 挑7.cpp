#include<iostream>
using namespace std;
bool isRelateTo7(int n){
    if(n%7==0){
        return true;
    }
    while(n!=0){
        if(n%10==7){
            return true;
        }
        n=n/10;
    }
    return false;
}
int main(){
    int N;
    while(cin>>N){
        int count=0;
        for(int i=1;i<=N;i++){
            if(isRelateTo7(i)){
                count++;
            }
        }
       cout<<count<<endl;
    }
}
