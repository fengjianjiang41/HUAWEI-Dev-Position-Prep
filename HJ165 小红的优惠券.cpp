#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> coupon(m);
    int pay = n;
    for(auto& i : coupon){
        cin >> i.first >> i.second;
        if(i.first <= n){
            pay = (n - i.second) < pay ? (n - i.second) : pay;
        }
    }

    cout << pay;

    return 0;
}
