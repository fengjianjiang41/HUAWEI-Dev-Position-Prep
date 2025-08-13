#include <cmath>
#include <iostream>
using namespace std;

int main() {
    double x; cin >> x;
    int xi = floor(x); double r = x - xi;
    int res = r >= 0.5 ? xi+1 : xi;
    cout << res;

}
// 64 位输出请用 printf("%lld")

// #include<iostream>
// #include<cmath>
// using namespace std;

// int main(){
//     float x;
//     cin >> x;
//     int y = x / 1; //得到整数部分
//     if(x - (float)y < 0.5) //判断小数部分与0.5的大小
//         cout << y << endl; //四舍
//     else
//         cout << y + 1 << endl; //五入
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     float x;
//     cin >> x;
//     cout << (int)(x+0.5) << endl; //强制类型转换
//     return 0;
// }


