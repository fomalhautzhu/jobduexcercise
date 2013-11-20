#include <cstdio>
#include <cstdlib>

using namespace std;

int main() {
    int n, i;
    long array[10000];
    while (scanf("%d", &n) != EOF) {
        for (i = 0; i < n; i++) {
            scanf("%ld", &array[i]);
        }
        long max = array[0], min = array[0];
        for (i = 0; i < n; i++) {
            if (array[i] > max)
                max = array[i];
            if (array[i] < min)
                min = array[i];
        }
        printf("%ld %ld\n", max, min);
    }
    return 0;
}

