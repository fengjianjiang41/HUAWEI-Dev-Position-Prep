#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n; cin >> n;
   vector<int> a(n+1);
   for(int i=1; i<=n; i++){
        cin >> a[i];
   }
   long long sum = 0;
   for(int i=1; i<=n; i++){
        int b, c; cin >> b >> c;
        sum += min(a[b] + a[c], a[i]);
   }
   cout << sum << endl;
}
