#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ToSort {
    char str[100];
    int length;
};

int Comp(const void *p1, const void *p2)
{
    const struct ToSort *q1 = p1;
    const struct ToSort *q2 = p2;
    
    return q1->length - q2->length;
}

int main() {
    int n, i;
    char temp[100];
    struct ToSort *s;
    while (scanf("%d", &n) != EOF) {
        getchar();
        s = (struct ToSort*)malloc(n*sizeof(struct ToSort));
        int count = 0;
        for (i = 0; i < n; i++) {
            gets(temp);
            if (strcmp(temp, "stop") == 0) 
                break;
            else {
                strcpy(s[i].str, temp);
                s[i].length = strlen(temp);
                count++;
            }
        }
        qsort(s, count, sizeof(struct ToSort), Comp);
        for (i = 0; i < count; i++) {
            printf("%s\n", s[i].str);
        }
    }
    return 0;
}

