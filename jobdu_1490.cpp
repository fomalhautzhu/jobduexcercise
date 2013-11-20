#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

void MyStrcat(char dstStr[], char srcStr[])
{
    char *p1 = srcStr, *p2 = dstStr;
    while (*p2 != '\0')
        p2++;
    while (*p1 != '\0') {
        if (*p1 == ' ') {
            p1++;
        }
        else {
            *p2++ = *p1++;
        }
    }
    *p2 = '\0';
}

int main() {
    char str_src[1000], str_dest[1000];
    while (scanf("%s %s", str_dest, str_src) != EOF) {
        MyStrcat(str_dest, str_src);
        printf("%s\n", str_dest);
    }
    return 0;
}

