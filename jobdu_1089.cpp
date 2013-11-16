#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int revInt(int num)
{
    int temp[6];
    int i = 0, j, k, m, ret = 0, s;
    while (num) {
        temp[i++] = num%10;
        num /= 10;
    }
    k = i;
    m = i;
    for (j = 0; j < m; j++) {
        s = 1;
        k--;
        for (i = 0; i < k; i++) {
            s *= 10;
        }
        ret += temp[j]*s;
    }
    return ret;
}

int main() {
    int n, a, b, i, sum1, sum2;
    while (scanf("%d", &n) != EOF) {
        for (i = 0; i < n; i++) {
            scanf("%d%d", &a, &b);
            sum1 = revInt(a) + revInt(b);
            sum2 = revInt(a+b);
            if (sum1 == sum2)
                printf("%d\n", a+b);
            else
                printf("NO\n");
        }
    }
    return 0;
}

