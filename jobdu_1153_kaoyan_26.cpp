#include <cstdlib>
#include <cstdio>
#include <vector>
#include <cstring>

using namespace std;

struct quote {
    char c;
    int pos;
};

int main() {
    char s[100], s1[100];
    vector<quote> vec;
    struct quote q;
    char ch;
    while (scanf("%s", s) != EOF) {
        vec.clear();
        int n = strlen(s);
        
        int i = 0;
        for (; i < n; i++)
            s1[i] = ' ';
        i = 0;
        while (s[i] != '\0') {
            if (s[i] == '(') {
                q.c = s[i];
                q.pos = i;
                vec.push_back(q);
            }
            else if (s[i] == ')') {
                if (vec.empty()) {
                    s1[i] = '?';
                }
                else {
                    q = vec.back();
                    ch = q.c;
                    if (ch == '(') {
                        vec.pop_back();
                    }
                }
            }
            i++;
        }
        while (!vec.empty()) {
            q = vec.back();
            vec.pop_back();
            s1[q.pos] = '$';
        }
        s1[i] = '\0';
        printf("%s\n", s);
        printf("%s\n", s1);
    }
    return 0;
}

