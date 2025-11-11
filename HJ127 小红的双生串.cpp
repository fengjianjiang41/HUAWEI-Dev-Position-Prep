#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int half = s.length() / 2;

    int cnt1[26] = {0};
    for (int i = 0; i < half; ++i)
        cnt1[s[i] - 'a']++;

    int maxn1 = -1;
    for (const auto &n : cnt1)
    {
        if (n > maxn1)
            maxn1 = n;
    }

    int cnt2[26] = {0};
    for (int i = half; i < s.length(); ++i)
        cnt2[s[i] - 'a']++;

    int maxn2 = -1;
    for (const auto &n : cnt2)
    {
        if (n > maxn2)
            maxn2 = n;
    }

    cout << s.length() - maxn1 - maxn2 << endl;
}
// 64 位输出请用 printf("%lld")
