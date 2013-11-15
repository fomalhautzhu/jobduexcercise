#include <iostream>
#include <cstdio>
#include <cstdlib>

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
    
    int year, dayofyear;
    while (scanf("%d%d", &year, &dayofyear) != EOF) {
        int month = 1, day;
        
        if (IsLeapyear(year)) {
            while (dayofyear > table_leap[month])
                dayofyear -= table_leap[month++];
        }
        else {
            while (dayofyear > table[month])
                dayofyear -= table[month++];
        }

        day = dayofyear;
        printf("%04d-%02d-%02d\n", year, month, day);
    }
    return 0;
}
