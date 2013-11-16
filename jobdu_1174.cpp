#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>

using namespace std;

bool Comp(int a, int b)
{
    return a < b;
}

int main() {
    int n, i, j, k;
    int array[1000] = {0};
    while (scanf("%d", &n) != EOF) {
        for (i = 0; i < n; i++) {
            scanf("%d", &array[i]);
        }
        scanf("%d", &k);
        sort(array, array+n, Comp);
        j = 1;
        i = 0;
        while (i < n-1 && j < k) {
            if (array[i+1] == array[i]) {
                i++;
            }
            else {
                i++;
                j++;
            }
        }
        printf("%d\n", array[i]);
    }
    
    return 0;
}

