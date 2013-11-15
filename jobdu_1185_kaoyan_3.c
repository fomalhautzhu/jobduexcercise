#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void _swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void quickSort(int *array, int left, int right)
{
    int i, last;
    if (left >= right)
        return;
    _swap(&array[left], &array[(left+right)/2]);
    last = left;
    for (i = left; i <= right; i++) {
        if (array[i] < array[left])
            _swap(&array[i], &array[++last]);
    }
    _swap(&array[last], &array[left]);
    quickSort(array, left, last-1);
    quickSort(array, last+1, right);
}

int main(int argc, char**argv) {
    int n, i;
    int array[1000];
    while (scanf("%d", &n) != EOF) {
        for (i = 0; i < n; i++) {
            scanf("%d", &array[i]);
        }
        if (n == 1) {
            printf("%d\n", array[0]);
            printf("-1\n");
        }
        else {
            int max_value = array[0];
            for (i = 0; i < n; i++) {
                if (array[i] > max_value)
                    max_value = array[i];
            }
            quickSort(array, 0, n-1);
            printf("%d\n", max_value);
            printf("%d", array[0]);
            for (i = 1; i < n-1; i++) {
                printf(" %d", array[i]);
            }
            printf("\n"); 
        }          
    }
    
    return 0;
}
