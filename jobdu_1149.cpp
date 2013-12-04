#include <iostream>
#include <map>

using namespace std;

int main()
{
    string s;
    map<string, int> substrcount;
    while (cin >> s) {
        substrcount.clear();
        for (int i = 0; i < s.size(); i++) {
            for (int j = 0; j <= i; j++) {
                string temp(s, j, i-j+1);
                substrcount[temp]++;
            }
        }
        map<string, int>::iterator iter = substrcount.begin();
        for (; iter != substrcount.end(); ++iter) {
            if (iter->second > 1)
                cout << iter->first << ' ' << iter->second << endl;
        }
    }
    return 0;
}