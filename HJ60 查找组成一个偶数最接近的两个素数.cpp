#include <cmath>
#include <iostream>
using namespace std;

bool ob(int n){
    if (n>2){
        for(int i=2;i<sqrt(n)+1;i++){
            if(n%i==0) return 0;
        }
    }
    return 1;
}

int main() {
    int a;
    while (cin >> a) { // 注意 while 处理多个 case
        for(int i=a/2;i>0;i--){
            if(ob(i)&&ob(a-i)){
                cout<<i<<endl<<a-i<<endl;
                break;
            }
        }
    }
}
// 64 位输出请用 printf("%lld")
