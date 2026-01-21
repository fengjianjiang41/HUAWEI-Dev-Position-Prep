#include <iostream>
#include <string.h>

using namespace std;

int char_i = 0;//使用全局变量，防止递归产生的无线循环

int cal(char* character) {
    int result = 0;

    int num[100] = {0};
    int num_index = 0;

    char sigh = '+';
    int len = strlen(character);
    while (char_i < len) {
        int num_m = 0;
        if (character[char_i] == '(' || character[char_i] == '[' ||
                character[char_i] == '{') {
            char_i++;
            num_m = cal(character);
        }

        while (1) {
            if (character[char_i] >= '0' && character[char_i] <= '9') {
                num_m = num_m * 10 + character[char_i] - '0';
                char_i++;
            } else
                break;
        }

        switch (sigh) {
            case '+':
                num[num_index] = num_m;
                num_index++;
                break;
            case '-':
                num[num_index] = -num_m;
                num_index++;
                break;
            case '*':
                num[num_index - 1] *= num_m;
                break;
            case '/':
                num[num_index - 1] /= num_m;
                break;
            default:
                break;
        }
        sigh = character[char_i];
        if (character[char_i] == '}' || character[char_i] == ']' ||
                character[char_i] == ')') {//结束本次递归，返回括号内运算的结果
            char_i++;
            break;
        }
        char_i++;


    }


    for (int i = 0; i < num_index; i++) {
        result += num[i];
    }

    return result;



}


int main() {
    char character[100] = { 0 };
    int result = 0;
    cin >> character;

    result = cal(character);

    cout << result << endl;
}
