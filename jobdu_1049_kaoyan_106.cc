#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    char s[1000];
    char c;
    while (scanf("%s", s) != EOF) {
        cin >> c;
        char *p1 = s, *p2 = s;
        while (*p2 != '\0') {
            if (*p2 != c) {
                *p1++ = *p2++;
            }
            else
                p2++;
        }
        *p1 = '\0';
        printf("%s\n", s);
    }
    return 0;
}

