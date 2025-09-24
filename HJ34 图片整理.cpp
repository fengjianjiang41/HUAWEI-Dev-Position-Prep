#include <iostream>
#include <string>
#include <algorithm>
using  namespace std;
 
 
int main(){
    string data;
    while(cin>>data)
    {
        sort(data.begin(),data.end());
        cout<<data<<endl;
    }   
    return 0;
}
