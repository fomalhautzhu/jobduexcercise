#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>

using namespace std;

int array[100000];

bool Comp(int a, int b)
{
    return a > b;
}

int main() {
    int n, m, i;
    while (scanf("%d%d", &n, &m) && !(n == 0 && m == 0)) {
        for (i = 0; i < n; i++) {
            scanf("%d", &array[i]);
        }
        sort(array, array+n, Comp);
        if (m > n)
            m = n;
        printf("%d", array[0]);
        for (i = 1; i < m; i++) {
            printf(" %d", array[i]);
        }
        printf("\n");
    }
    return 0;
}

