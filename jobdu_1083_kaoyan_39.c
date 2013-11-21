#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str1[10], str2[10];
    int i, j, sum;
    while (scanf("%s %s", str1, str2) != EOF) {
        sum = 0;
        for (i = 0; i < strlen(str1); i++) {
            for (j = 0; j < strlen(str2); j++) {
                int a = str1[i] - '0';
                int b = str2[j] - '0';
                sum += a*b;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}

