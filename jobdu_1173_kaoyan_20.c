#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int binSearch(int *array, int value, int n)
{
    int low, high, mid;
    low = 0;
    high = n - 1;
    if (low >= high)
        return 0;
    while (low <= high) {
        mid = (low + high)/2;
        if (array[mid] > value)
            high = mid - 1;
        else if (array[mid] < value)
            low = mid + 1;
        else
            return 1;
    }
    return 0;
}

void insertSort(int *array, int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++) {
        temp = array[i];
        for (j = i; j > 0 && array[j-1] > temp; j--)
            array[j] = array[j-1];
        array[j] = temp;
    }
}


int main(int argc, char**argv) {
    int n, m, i;
    int array[110];
    int tosearch[110];
    while (scanf("%d", &n) != EOF) {
        for (i = 0; i < n; i++) {
            scanf("%d", &array[i]);
        }
        scanf("%d", &m);
        for (i = 0; i < m; i++) {
            scanf("%d", &tosearch[i]);
        }
        insertSort(array, n);
        for (i = 0; i < m; i++) {
            if (binSearch(array, tosearch[i], n))
                printf("YES\n");
            else
                printf("NO\n");
        }      
    }
    
    return 0;
}
