#include <iostream>
#include <cstdio>
#include <cstring>

int main() {
    int l, m, i, j, low, high;
    int array[10000];
    while (scanf("%d%d", &l, &m) != EOF) {
        for (i = 0; i <=l; i++)
            array[i] = 1;
        for (j = 0; j < m; j++) {
            scanf("%d%d", &low, &high);
            for (i = low; i <= high; i++) {
                array[i] = 0;
            }
        }
        int sum = 0;
        for (i = 0; i <= l; i++) {
            if (array[i])
                sum++;
        }
        printf("%d\n", sum);    
    }
    return 0;
}
