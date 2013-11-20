#include <cstdlib>
#include <cstdio>

using namespace std;
long array[1000000];

int main() {
    long n, i, maxsum, sum;
    while (scanf("%ld", &n) != EOF) {
        for (i = 0; i < n; i++) {
            scanf("%ld", &array[i]);
        }
        sum = 0;
        maxsum = array[0];
        for (i = 0; i < n; i++) {
            sum += array[i];
            if (sum > maxsum)
                maxsum = sum;
            else if (sum < 0)
                sum = 0;
        }
        printf("%ld\n", maxsum);
    }
    
    return 0;
}

