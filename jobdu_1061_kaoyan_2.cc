#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

struct ToSort {
    char stu[100];
    int age;
    int score;
};

int main(int argc, char**argv) {
    // Prints welcome message...
    int n, i;
    struct ToSort t[1000];
    //vector<ToSort> v;
    //ToSort t;
    while (scanf("%d", &n) != EOF) {
        for (i = 0; i < n; i++) {
            scanf("%s%d%d", &t[i].stu, &t[i].age, &t[i].score);
        }
        
        int j, k, min;
        for (j = 0; j < n-1; j++) {
            min = j;
            struct ToSort temp;
            for (k = j+1; k < n; k++) {
                if (t[min].score > t[k].score)
                    min = k;
                else if (t[min].score == t[k].score) {
                    if (strcmp(t[min].stu, t[k].stu) > 0)
                        min = k;
                    else if ((strcmp(t[min].stu, t[k].stu) == 0) && t[min].age > t[k].age)
                        min = k;              
                }  
            }
            if (min != j) {
                temp = t[j];
                t[j] = t[min];
                t[min] = temp;
            }
        }
        
        for (i = 0; i < n; i++) {
            printf("%s %d %d\n", t[i].stu, t[i].age, t[i].score);
        }
    
    }
    
    return 0;
}
