#include <bits/stdc++.h>
using namespace std;
 
int main() {
     int n;
    string str;
    while(cin>>n>>str){// 注意 while 处理多个 case
       
        int i =1;
        int l=1;
        for(auto c : str){
            if(n<=4){

                if(c=='U')
            {
                if(i==1)
                {
                    i=n;
                }
                else
                {
                    i--;
                }
            }
            else if(c=='D')
            {
                if(i==n)
                {
                    i=1;
                }
                else 
                {
                    i++;
                }
            }
            
            }else {
                
                  if (c=='U'){
              
                         if (i==1){
                                i= n;
                             l = n-4+1;
                         }else if (i>1 && l==i){
                                i--;
                             l=i;
                             
                         }else {
                            i--;
                         }
                    }else  if(c=='D'){
                      
                      if (i==n){
                            i =1;
                          l=i;
                      
                      }else if (i<n && i-l==3){
                          i++;
                          l++;
                      }else {
                i++;
                          }
                      
                      
                      
                    }
                  }
                
            }
            for(int j = 0 ; j < 4;j++){
                if (l+j > n){
                        break;
                }
                
                cout<< l +j <<' ';
                
            }
        
             cout<< endl;
        cout<<i<<endl;
            
        }
        
        
}
