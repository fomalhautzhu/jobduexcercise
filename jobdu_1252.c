#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(char *str, int start, int end)
{
    if (str == NULL)
        return 0;
    else {
        char *p1 = str + start, *p2 = str + end;
        while (p1 < p2 && *p1 == *p2) {
            p1++;
            p2--;
        }
        if (p1 < p2)
            return 0;
        else
            return 1;
    }
}

int main() {
    char str[100];
    while (scanf("%s", str) != EOF) {
        int start = 0;
        int end = strlen(str) - 1;
        int length = 0, maxlength = 0;
        for (; start < strlen(str), start < end; start++) {
            while (start < end) {
                if (isPalindrome(str, start, end)) {
                    length = end - start + 1;
                    if (length > maxlength)
                        maxlength = length;
                    break;
                }
                else {
                    end--;
                }
            }
            end = strlen(str) - 1;            
        }
        printf("%d\n", maxlength);
    }
    return 0;
}


