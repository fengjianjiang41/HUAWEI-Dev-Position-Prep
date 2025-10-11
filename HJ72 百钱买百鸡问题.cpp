#include <iostream>
using namespace std;

int main() {
    int money=300;
    int x=15;int y=9;int z=1;
    for(int i=0;i<20;i++){
        for(int j=0;j<=33;j++){
            for(int k=0;k<=100;k++){
                if(i+j+k==100 && 5*i+3*j+double(k)/3==100)
                    cout<<i<<" "<<j<<" "<<k<<endl;
            }
        }
    }
    return 0;
}
// 64 位输出请用 printf("%lld")
