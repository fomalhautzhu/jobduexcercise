#include <iostream>
#include <cstdio>
#include <cstring>

int main() {
    unsigned int i = 1;
    unsigned int i2;
    char s[10];
    for (i = 0; i < 256; i++) {
        i2 = i*i;
        sprintf(s, "%d", i2);
        int n = strlen(s);
        int j = 0, k = n-1, flag = 0;
        while ((s[j] == s[k]) && (j < k)) {
            j++;
            k--;
        }
        if (k-j <= 1)
            flag = 1;
        if (n%2 == 0)
            flag = 0;
        if (flag)
            printf("%d\n", i, s);
    } 
    return 0;
}
