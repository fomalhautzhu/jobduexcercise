#include <stdio.h>
#include <stdlib.h>

int mat[100][100];

int main() {
    int n, i, j, flag;
    while (scanf("%d", &n) != EOF) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                scanf("%d", &mat[i][j]);
            }
        }
        flag = 0;
        for (i = 0; i < n; i++) {
            if (flag)
                break;
            for (j = 0; j < n; j++) {
                if (mat[i][j] != mat[j][i]) {
                    printf("No!\n");
                    flag = 1;
                    break;
                }
            }
        }
        if (i == n && j == n) {
            printf("Yes!\n");
        }
    }
    return 0;
}

