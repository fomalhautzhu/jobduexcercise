#include <cstdio>
#include <cstdlib>
#include <algorithm>

using namespace std;

struct ToSort {
    int value;
    int pos;
    int order;
}s[10000];

bool sortbyvalue(const struct ToSort& a, const struct ToSort& b)
{
    return a.value < b.value;
}

bool sortbypos(const struct ToSort& a, const struct ToSort& b)
{
    return a.pos < b.pos;
}

int main(int argc, char** argv) {
    int n, i;
    //struct ToSort t;
    while (scanf("%d", &n) != EOF) {
        for (i = 0; i < n; i++) {
            scanf("%d", &s[i].value);
            s[i].pos = i;
        }
        sort(s, s+n, sortbyvalue);

        s[0].order = 1;
        int k = 1;
        for (i = 1; i < n; i++) {
            if (s[i].value == s[i-1].value) {
                s[i].order = k;
            }
            else {
                s[i].order = ++k;
            }
        }
        sort(s, s+n, sortbypos);
        printf("%d", s[0].order);
        for (i = 1; i < n; i++) {
            printf(" %d", s[i].order);
        }
        printf("\n");
    }
    
    return 0;
}

