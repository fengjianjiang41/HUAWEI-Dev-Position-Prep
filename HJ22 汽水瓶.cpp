#include <iostream>
using namespace std;

int main() {
    int num;
    while (cin >> num) {
        if (!num) break;
        int res = 0; int left = num;
        while (left >= 2){
            if (left==2) left += 1;
            int temp = left / 3;
            res += temp;
            left = temp + left % 3;
        }
        cout << res << endl;
    }

}
// 64 位输出请用 printf("%lld")
