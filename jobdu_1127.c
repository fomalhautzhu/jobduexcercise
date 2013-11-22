#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[200];
    int i, len;
    while (gets(str)) {
        if (strcmp(str, "ENDOFINPUT") == 0)
            break;
        else if (strcmp(str, "START") == 0) {
            gets(str);
            len = strlen(str);
            for (i = 0; i < len; i++) {
                if (str[i] >= 'F' && str[i] <= 'Z')
                    str[i] -= 5;
                else if (str[i] >= 'A' && str[i] <= 'E')
                    str[i] = str[i] + 'Z' - 'E';
            }
            printf("%s\n", str);
        }
    }
    return 0;
}

