#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n;
    while (scanf("%d %d", &m, &n) != EOF) {
        int m_0 = m, n_0 = n;
        unsigned int rem;
        while (n > 0) {
            rem = m % n;
            m = n;
            n = rem;
        }
        printf("%d\n", m_0*n_0/m);
    }
    return 0;
}

