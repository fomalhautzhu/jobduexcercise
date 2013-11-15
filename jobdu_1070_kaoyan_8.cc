#include <iostream>
#include <cstdio>

bool IsLeapyear(int a)
{
    if (a%400 == 0 || (a%4 == 0 && a%100 != 0))
        return true;
    else
        return false;
}

int main() {
    int table[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int table_leap[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year, month, day, i;
    while (scanf("%d%d%d", &year, &month, &day) != EOF) {
        int sum = 0;
        if (IsLeapyear(year)) {
            for (i = 1; i < month; i++) {
                sum += table_leap[i];
            }
        }
        else {
            for (i = 1; i < month; i++) {
                sum += table[i];
            }
        }
        sum += day;
        printf("%d\n", sum);
    }
    
    
    return 0;
}
