#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
    char array[1000];
    int i;
    while (scanf("%s", array)) {
        if (array[0] == '0' && strlen(array) == 1)
            break;
        int result = 0, temp;
        int len = strlen(array);
        for (i = 0; i < len; i++) {
            temp = pow(2, len-i);
            result += (array[i] - '0') * (temp - 1);
        }
        printf("%d\n", result);
    }
    return 0;
}

