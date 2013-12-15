#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

struct employee {
    int id;
    string name;
    int age;
}ToSort[30];

bool Comp(struct employee a, struct employee b)
{
    if (a.age != b.age)
        return a.age < b.age;
    else if (a.id != b.id)
        return a.id < b.id;
    else
        return a.name < b.name;
}

int main() {
    int n, i, m;
    while (cin >> n) {
        for (i = 0; i < n; i++) {
            cin >> ToSort[i].id >> ToSort[i].name >> ToSort[i].age;
        }
        sort(ToSort, ToSort+n, Comp);
        m = (n < 3) ? n : 3;   
        for (i = 0; i < m; i++) {
            cout << ToSort[i].id << ' ' << ToSort[i].name << ' ' << ToSort[i].age << endl;
        }
    }
    return 0;
}

