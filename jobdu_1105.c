#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[80];
    int i;
    while (gets(str)) {
        if (strlen(str) == 1 && str[0] == '!')
            break;
        for (i = 0; str[i]; i++) {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] = -str[i] + 'a' + 'z';
            else if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] = -str[i] + 'A' + 'Z';
        }
        printf("%s\n", str);
    }
    return 0;
}

