#include <any>
#include <cstdio>
#include <cstring>
#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    int t, len;
    char s[1000000];
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%s", s);
        len = strlen(s);
        for (int j = 1; j < len; j++) {
            for (int k = j; k > 0; k--) {
                if (s[k] - 1 > s[k - 1]) {
                    s[k]--;
                    swap(s[k], s[k - 1]);
                } else {
                    break;
                }
            }
        }
        printf("%s\n", s);
    }
    return 0;
}
