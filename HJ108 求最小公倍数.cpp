#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    while (cin >> a) {
        cin >> b;
        int i1 = a, i2 = b;
        if (a < b) {
            int temp = i1;
            i1 = i2;
            i2 = temp;
        }
        while (i2 != 0) {
            int temp = i1;
            i1 = i2;
            i2 = temp % i2;
        }

        cout << a* b / i1 << endl;
    }
}
