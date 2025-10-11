#include <iostream>
using namespace std;

int putApples(int M, int N) {
    if (M < 0)
        return 0;
    if (M == 0 || M == 1)
        return 1;
    if (N == 1)
        return 1;
    return putApples(M - N, N) + putApples(M, N - 1);
}

int main() {
    int N, M;
    while (cin >> M >> N) { // 注意 while 处理多个 case
        if ((0 <= M && M <= 10) && (1 <= N && N <= 10))
            cout << putApples(M, N) << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}
// 64 位输出请用 printf("%lld")
