#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int squarenum(int n)
{
    if (n == (int)sqrt((double)n)*(int)sqrt((double)n))
        return 1;
    else
        return 0;
}

int main() {
    int n, i;
    while (scanf("%d", &n) != EOF) {
        if (n == 0)
            break;
        for (i = 2; i <= n; i++) {
            if ((n % i == 0) && squarenum(i)) {
                printf("Yes\n");
                break;
            }
        }
        if (i > n)
            printf("No\n");
    }
    return 0;
}

