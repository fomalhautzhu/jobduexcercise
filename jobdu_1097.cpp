#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int array1[1000000] = {0}, array2[1000000] = {0}, result[1000000] = {0};

int main() {
    int t, l1, l2, a, b, c, d, i, k;
    while (scanf("%d", &t) != EOF) {
        for (k = 0; k < t; k++) {
            scanf("%d%d", &l1, &l2);
            for (i = 0; i < l1; i++) {
                scanf("%d", &array1[i]);
            }
            for (i = 0; i < l2; i++) {
                scanf("%d", &array2[i]);
            }
            scanf("%d%d", &a, &b);
            scanf("%d%d", &c, &d);
        
            int j = 0;
            for (i = a-1; i < b; i++) {
                result[j++] = array1[i];
            }
            for (i = c-1; i < d; i++) {
                result[j++] = array2[i];
            }

            printf("%d\n", result[(j-1)/2]);
        }
    }
    return 0;
}

