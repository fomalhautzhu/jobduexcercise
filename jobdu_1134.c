#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, i, j;
    char str[80];
    char num[10];
    while (gets(num)) {
        n = atoi(num);
        for (j = 0; j < n; j++) {
            gets(str);
            int len = strlen(str);
            for (i = 0; i < len; i++) {
                if ((str[i] >= 'a' && str[i] < 'z') || (str[i] >= 'A' && str[i] < 'Z'))
                    str[i] = str[i] + 1;
                else if (str[i] == 'z')
                    str[i] = 'a';
                else if (str[i] == 'Z')
                    str[i] = 'A';
            }
            printf("%s\n", str);
        }
    }
    return 0;
}

