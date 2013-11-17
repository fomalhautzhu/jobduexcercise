#include <cstdio>
#include <queue>
#include <cstdlib>
 
using namespace std;
 
int main() {
    int n, i, m, a, b, sum;
    priority_queue<int, vector<int>, greater<int> > Q;
    while (scanf("%d", &n) && n) {
        while (!Q.empty())
            Q.pop();
        for (i = 0; i < n; i++) {
            scanf("%d", &m);
            Q.push(m);
        }
        sum = 0;
        while (Q.size() > 1) {
            a = Q.top();
            Q.pop();
            b = Q.top();
            Q.pop();
            sum += (a+b);
            Q.push(a+b);
        }
        printf("%d\n", sum);      
    }
    return 0;
}