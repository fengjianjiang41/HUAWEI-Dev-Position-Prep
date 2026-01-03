#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main() {
    string str;
    while (cin>>str) {
        int len = str.size();
        int max = 0;
        for (int i = 1; i < len; i++) {
            int count1 = 1;
            //aba的检查
            for (int j = 1; i - j >= 0 && i + j < len; j++) {
                if (str[i - j] == str[i + j]) count1 += 2;
                else break;
            }
            //abba的检查
            int count2 = 0;
            for (int j = 1; i - j >= 0 && i + j - 1 < len; j++) {
                if (str[i - j] == str[i + j - 1]) count2 += 2;
                else break;
            }
            max = count1 > max ? count1 : max;
            max = count2 > max ? count2 : max;
        }
        printf("%d\n", max);
    }
    return 0;
}
