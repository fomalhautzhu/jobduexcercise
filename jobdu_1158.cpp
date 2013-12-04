#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
    int n, k;
    long sum1, sum2;
    while (scanf("%d %d", &n, &k) != EOF) {
        sum1 = 0;
        sum2 = 0;
        double m = 1+ 0.01*(double)k;
        int i;
        for (i = 1; i <= 20; i++) {
            sum1 = n*i;
            sum2 = 200*pow(m, i-1);
            if (sum1 >= sum2) {
                printf("%d\n", i);
                break;
            }
        }
        if (i > 20)
            printf("Impossible\n");
    }
    return 0;
}

