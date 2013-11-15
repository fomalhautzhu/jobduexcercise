#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;

struct ToSort {
    string id;
    string name;
    int score;
};

bool Comp_id(const ToSort &a, const ToSort &b)
{
    return a.id < b.id;
}

bool Comp_name(const ToSort &a, const ToSort &b)
{
    if (a.name == b.name)
        return a.id < b.id;
    else
        return a.name <= b.name;
}

bool Comp_score(const ToSort &a, const ToSort &b)
{
    if (a.score == b.score)
        return a.id < b.id;
    else
        return a.score <= b.score;
}

int main() {
    int n, c, i, k = 1;
    vector<ToSort> vec;
    ToSort t;
    while (scanf("%d%d", &n, &c) && n != 0) {
        for (i = 0; i < n; i++) {
            cin >> t.id >> t.name >> t.score;
            vec.push_back(t);
        }
        sort(vec.begin(), vec.end(), Comp_id);
        switch(c) {
            case 1:
                sort(vec.begin(), vec.end(), Comp_id);
                break;
            case 2:
                sort(vec.begin(), vec.end(), Comp_name);
                break;
            case 3:
                sort(vec.begin(), vec.end(), Comp_score);
                break;
        }
        printf("Case %d:\n", k++);
        for (i = 0; i < n; i++) {
            printf("%s %s %d\n", vec[i].id.c_str(), vec[i].name.c_str(), vec[i].score);
        }
        vec.clear();
    }
    
    return 0;
}
