#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j;
    while (scanf("%d", &n) != EOF) {
        int *arr1 = (int *)malloc(n*sizeof(int));
        int *arr2 = (int *)malloc(n*sizeof(int));
        for (i = 0; i < n; i++) {
            scanf("%d", &arr1[i]);
        }
        for (i = 0; i < n; i++) {
            scanf("%d", &arr2[i]);
        }
        
        if (arr1[0] < arr2[0]) {
            printf("%d", arr1[0]);
            i = 1;
            j = 0;
        }
        else {
            printf("%d", arr2[0]);
            i = 0;
            j = 1;
        }    
        while (i < n && j < n) {
            if (arr1[i] < arr2[j]) {
                printf(" %d", arr1[i++]);
            }
            else {
                printf(" %d", arr2[j++]);
            }
        }
        if (i == n) {
            while (j < n) {
                printf(" %d", arr2[j++]);
            }    
        }
        if (j == n) {
            while (i < n) {
                printf(" %d", arr1[i++]);
            }
        }
        printf("\n");
    }
    return 0;
}

