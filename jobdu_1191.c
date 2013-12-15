#include <stdio.h>
#include <stdlib.h>

int mat[100][100];

int main() {
    int m, n, i, j, sum, maxval;
    while (scanf("%d %d", &m, &n) != EOF) {
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                scanf("%d", &mat[i][j]);
            }
        }
        for (i = 0; i < m; i++) {
            maxval = mat[i][0];
            sum = 0;
            for (j = 0; j < n; j++) {
                sum += mat[i][j];
                if (mat[i][j] > maxval)
                    maxval = mat[i][j];           
            }
            for (j = 0; j < n; j++) {
                if (mat[i][j] == maxval) {
                    mat[i][j] = sum;
                    break;
                }             
            }
        }
        for (i = 0; i < m; i++) {
            printf("%d", mat[i][0]);
            for (j = 1; j < n; j++) {
                printf(" %d", mat[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}

