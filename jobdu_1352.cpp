#include <cstdio>
#include <cstdlib>

using namespace std;

int array[1000000];

void binsearch(int *array, int value, int n)
{
    int low = 0, high = n-1;
    while (low < high) {
        if (value < array[low] + array[high])
            high--;
        else if (value > array[low] + array[high])
            low++;
        else {
            printf("%d %d\n", array[low], array[high]);
            return;
        }        
    }
    printf("-1 -1\n");
}

int main() {
    int n, k, i;
    while (scanf("%d %d", &n, &k) != EOF) {
        for (i = 0; i < n; i++) {
            scanf("%d", &array[i]);
        }
        binsearch(array, k, n);
    }
    return 0;
}

