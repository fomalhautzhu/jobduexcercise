#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[25], dp[25];
    int n, i, j;
    while (scanf("%d", &n) != EOF) {
        for (i = 0; i < n; i++) {
            scanf("%d", &array[i]);
        }

        for (i = 0; i < n; i++) {
            int tmax = 1;
            for (j = 0; j < i; j++) {
                if (array[j] >= array[i] && dp[j] >= tmax)
                    tmax = dp[j]+1;
            }
            dp[i] = tmax;
        }
        int ans = 0;
        for (i = 0; i < n; i++) {
            if (dp[i] > ans)
                ans = dp[i];
        }
        printf("%d\n", ans);
    }
    return 0;
}

