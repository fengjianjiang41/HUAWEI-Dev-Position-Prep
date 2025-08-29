#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

bool isPrimeNumber(int n){
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    std::vector<int> res (0, 0);
    int n; cin >> n;
    int i = 2;
    while (i <= n && n > 1){
        if (n % i == 0){
            res.push_back(i);
            n = n / i;
        }
        else if (isPrimeNumber(n)){
            res.push_back(n);
            break;
        }
        else i++;
    }
    for (int j = 0; j < res.size()-1; j++) {
        cout << res[j] << " ";
    } cout << res[res.size()-1];
}
// 64 位输出请用 printf("%lld")
