#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int cmp(const void* a, const void* b) {
    return *(int*)b - *(int*)a;
}
int main() {
    int num;
    while (scanf("%d", &num) != EOF) {
        int i, j;
        char str[10000] = {0};
        int len, sum;
        for (i = 0; i < num; i++) {
            scanf("%s", str);
            len = strlen(str);
            sum = 0;
            int data[26] = {0};
            for (j = 0; j < len; j++) {
                if (str[j] >= 'a' && str[j] <= 'z')
                    data[str[j] - 'a']++;
                else if (str[j] >= 'A' && str[j] <= 'Z')
                    data[str[j] - 'A']++;

            }
            qsort(data, 26, sizeof(data[0]), cmp);

            for (j = 26; j > 0; j--) {
                sum = sum + data[26 - j] * j;
            }
            printf("%d\n", sum);
        }


    }
}
