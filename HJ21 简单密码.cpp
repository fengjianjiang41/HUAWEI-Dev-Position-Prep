#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    while (cin >> s) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] <= '9' && s[i] >= '0') {
                cout << s[i];
            } else if (s[i] < 'Z' && s[i] >= 'A') {
                s[i] = s[i] + 33;
                cout << s[i];
            } else if (s[i] == 'Z') {
                cout << "a";
            } else if (s[i] <= 'z' && s[i] >= 'a') {
                if (s[i] <= 'c' && s[i] >= 'a')cout << "2";
                if (s[i] <= 'f' && s[i] >= 'd')cout << "3";
                if (s[i] <= 'i' && s[i] >= 'g')cout << "4";
                if (s[i] <= 'l' && s[i] >= 'j')cout << "5";
                if (s[i] <= 'o' && s[i] >= 'm')cout << "6";
                if (s[i] <= 's' && s[i] >= 'p')cout << "7";
                if (s[i] <= 'v' && s[i] >= 't')cout << "8";
                if (s[i] <= 'z' && s[i] >= 'w')cout << "9";
            }
        }
        return 0;
    }
}
