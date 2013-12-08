#include <stdio.h>
#include <stdlib.h>

void _swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

int main() {
    int a, b, c;
    while (scanf("%d %d %d", &a, &b, &c) != EOF) {
        if (a == 0)
            break;
        if (a < b)
            _swap(&a, &b);
        if (a < c)
            _swap(&a, &c);
        if (b < c)
            _swap(&b, &c);
        printf("%d\n", b+c-a);
    }
    return 0;
}

