#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main() {
    int a, b, i;
    char sign;
    long result;
    while (scanf("%d %c", &a, &sign) != EOF) {
        if (sign != '!')
            scanf("%d", &b);
        switch(sign) {
            case '+':
                result = a+b;
                printf("%ld\n", result);
                break;
            case '-':
                result = a-b;
                printf("%ld\n", result);
                break;
            case '*':
                result = a*b;
                printf("%ld\n", result);
                break;
            case '/':
                if (b == 0) {
                    printf("error\n");
                    break;
                }
                else {
                    result = a/b;
                    printf("%ld\n", result);
                    break;
                }
            case '%':
                if (b == 0) {
                    printf("error\n");
                    break;
                }
                else {
                    result = a%b;
                    printf("%ld\n", result);
                    break;
                }
            case '!':
                result = 1;
                for (i = 1; i <= a; i++)
                    result *= i;
                printf("%ld\n", result);
                break;                
        }
    }
    
    return 0;
}

