#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main() {
    int array[80];
    int result[80] = {0};
    int n, i, j, k, m;
    while (scanf("%d", &n) != EOF) {
        for (i = 0; i < n; i++) {
            scanf("%d", &k);
            
            for (j = 0; j < k; j++) {
                scanf("%d", &array[j]);
                result[j] = 0;
            }        
        
            if (k == 1)
                result[0] = 1;
            else if (k == 2) {
                result[0] = 1;
                result[1] = 1;
            }
            else {
                if (array[0] != array[1])
                    result[0] = 1;
                if (array[k-1] != array[k-2])
                    result[k-1] = 1;
                for (j = 1; j < k-1; j++) {
                    if ((array[j-1] < array[j]) && (array[j] > array[j+1]))
                        result[j] = 1;
                    if ((array[j-1] > array[j]) && (array[j] < array[j+1]))
                        result[j] = 1;
                }
            }
            
            j = 0;
            while(!result[j])
                j++;
            printf("%d", j);
            
            for (m = j+1; m < k; m++) {
                if (result[m])
                    printf(" %d", m);
            }
            printf("\n");
   
        }        
    }
    return 0;
}

