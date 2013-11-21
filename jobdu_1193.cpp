#include <cstdio>
#include <cstdlib>
#define MAXN 100
using namespace std;

int array[MAXN][MAXN];

int main() {
    int n, i, j;
    while (scanf("%d", &n) != EOF) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                scanf("%d", &array[i][j]);
        }
        for (i = 0; i < n; i++) {
            for (j = i; j < n; j++) {
                int temp;
                temp = array[i][j];
                array[i][j] = array[j][i];
                array[j][i] = temp;
            }                
        }
        for (i = 0; i < n; i++) {
            printf("%d", array[i][0]);
            for (j = 1; j < n; j++)
                printf(" %d", array[i][j]);
            printf("\n");
        }
    }
    return 0;
}

