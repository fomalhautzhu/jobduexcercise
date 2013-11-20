#include <cstdio>
#include <cstdlib>

using namespace std;

int count(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    else {
        return count(n-1) + count(n-2);
    }
}

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        printf("%d\n", count(n));
    }
    return 0;
}
