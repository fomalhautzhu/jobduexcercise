#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
using namespace std;

struct TV {
    int Ti_s;
    int Ti_e;
};

bool Comp(const TV &a, const TV &b)
{
    if (a.Ti_e != b.Ti_e)
        return a.Ti_e < b.Ti_e;
    else if (a.Ti_s != b.Ti_s)
        return a.Ti_s < b.Ti_s;
}

int main() {
    struct TV t[110];
    int n, i, j, sum;
    while (scanf("%d", &n) && n) {
        for (i = 0; i < n; i++) {
            scanf("%d%d", &t[i].Ti_s, &t[i].Ti_e);
        }
        
        sort(t, t+n, Comp);
        
        sum = 1;
        j = 0;
        for (i = 1; i < n; i++) {
            if (t[i].Ti_s >= t[j].Ti_e) {
                j = i;
                sum++;                
            }   
        }

        printf("%d\n", sum);
    }

    return 0;
}

