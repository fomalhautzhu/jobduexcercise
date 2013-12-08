#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s1[100], s2[100], s[200];
    while (scanf("%s %s", s1, s2) != EOF) {
        int len1 = strlen(s1), len2 = strlen(s2);
        int i = 0, j = len2 - 1, k = 0;
        for (; k < len1+len2; k++) {
            if (k % 2)
                s[k] = s2[j--];
            else
                s[k] = s1[i++];
        }
        s[len1+len2] = '\0';
        printf("%s\n", s);
    }
    return 0;
}

