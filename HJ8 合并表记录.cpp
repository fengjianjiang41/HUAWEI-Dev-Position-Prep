#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    int x;int y;
    map<int,int> m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        m[x] += y;
    }
    for (map<int, int>::iterator it = m.begin();
    it != m.end(); it++) {
		cout <<it->first << ' ' << it->second << endl;
	}

    return 0;
}
// 64 位输出请用 printf("%lld")
