#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int max(int a, int b)
{
    return a > b ? a : b;
}

int main() {
    char str1[100], str2[100];
    int dp[101][101];
    while (scanf("%s %s", str1, str2) != EOF) {
        int len1 = strlen(str1);
        int len2 = strlen(str2);
        int i, j;
        for (i = 0; i < len1; i++)
            dp[i][0] = 0;
        for (j = 0; j < len2; j++)
            dp[0][j];
        
        for (i = 1; i <= len1; i++) {
            for (j = 1; j <= len2; j++) {
                if (str1[i-1] != str2[j-1])
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                else
                    dp[i][j] = dp[i-1][j-1] + 1;
            }
        }
        
        printf("%d\n", dp[len1][len2]);
    }
    return 0;
}

