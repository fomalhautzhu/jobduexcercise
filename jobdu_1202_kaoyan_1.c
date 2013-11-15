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
    int i,last;
    if (left >= right)
        return;
    _swap(&array[left], &array[(left+right)/2]);
    last = left;
    for (i = left + 1; i <= right; i++)
        if (array[i] < array[left])
            _swap(&array[i], &array[++last]);
    _swap(&array[left], &array[last]);
    quickSort(array, left, last-1);
    quickSort(array, last+1, right);    
}

int main() {
    int n, i;
    int array[100];
    while (scanf("%d", &n) != EOF) {
        for (i = 0; i < n; i++) {
            scanf("%d", &array[i]);
        }
        
        quickSort(array, 0, n-1);
        for (i = 0; i < n; i++)
            printf("%d ", array[i]);
        printf("\n");
        
    }
    return 0;
}
