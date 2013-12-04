#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char str_t[1000000], str_p[1000000];

int main() {
    while (scanf("%s %s", str_t, str_p) != EOF) {
        int len_t = strlen(str_t), len_p = strlen(str_p);
        int s, i, count = 0;
        for (s = 0; s < len_t-len_p+1; s++) {
            for (i = 0; i < len_p; i++) {
                if (str_t[s+i] != str_p[i])
                    break;
            }
            if (i == len_p)
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}

