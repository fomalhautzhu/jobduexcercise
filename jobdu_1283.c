#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char str[10000];
int hashtable[26];

int main() {
    
    int i;
    
    while (scanf("%s", str) != EOF) {
        memset(hashtable, 0, 26);
        int len = strlen(str);
        for (i = 0; i < len; i++) {
            hashtable[str[i]-'A']++;
        }
        for (i = 0; i < len; i++) {
            if (hashtable[str[i]-'A'] == 1) {
                printf("%d\n", i);
                break;
            }
        }
        if (i == len)
            printf("%d\n", -1);
    }   
    return 0;
}

