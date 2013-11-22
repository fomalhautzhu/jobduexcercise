#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reversestr(char *str, int begin, int end)
{
    if (str == NULL)
        return;
    else {
        char *p1 = str + begin, *p2 = str + end - 1;
        char ch;
        while (p1 < p2) {
            ch = *p1;
            *p1 = *p2;
            *p2 = ch;
            p1++;
            p2--;
        }
    }
}

int main() {
    char str[50000];
    int i;
    while (gets(str)) {
        int len = strlen(str);
        reversestr(str, 0, len);

        int begin = 0, end = 0;
        for (; end <= len; end++) {
            if (str[end] == ' ' || str[end] == '\0') {
                reversestr(str, begin, end);
                begin = end + 1;
            }
        }
        printf("%s\n", str);
    }
    return 0;
}

