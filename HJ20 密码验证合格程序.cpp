#include<iostream>
#include<string>
using namespace std;
int func1(string& n) {
    int t[4] = {0};
    for (int i = 0; i < n.size(); i++) {
        if (n[i] <= '9' && n[i] >= '0')t[0] = 1;
        else if (n[i] <= 'z' && n[i] >= 'a')t[1] = 1;
        else if (n[i] <= 'Z' && n[i] >= 'A')t[2] = 1;
        else t[3] = 1;
    }
    return t[0] + t[1] + t[2] + t[3];
}

bool func2(string& n) {
    for (int i = 0; i + 3 < n.size(); i++) {
        string d = n.substr(i, 3);
        if (n.find(d, i + 3) != -1)return true;
    }
    return false;
}
int main() {
    string n;
    while (cin >> n) {
        if ((n.size() <= 8) || func1(n) < 3 || func2(n))
            cout << "NG" << endl;
        else cout << "OK" << endl;
    }
}
