#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;
int array[10000];

int main() {
    int n, i;
    while (scanf("%d", &n) && n) {
        for (i = 0; i < n; i++) {
            scanf("%d", &array[i]);
        }
        int allnegflag = 1;
        for (i = 0; i < n; i++) {
            if (array[i] >= 0)
                allnegflag = 0;
        }
        int dp = 0, maxsum = 0x80000000;
        int start = 0, end = 0, pos = 0;
        for (i = 0; i < n; i++) {
            if (dp < 0) {
                dp = array[i];
                pos = i;
            }
            else {
                dp += array[i];
            }
            if (dp > maxsum) {
                maxsum = dp;
                start = pos;
                end = i;
            }
        }
        if (allnegflag)
            printf("%d %d %d\n", 0, array[0], array[n-1]);
        else
            printf("%d %d %d\n", maxsum, array[start], array[end]);     
    }
    return 0;
}

