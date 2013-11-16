#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main() {
    string word, replace, toreplace;
    vector<string> line;
    vector<string>::iterator iter;
    char ch;
    while (cin >> word) {
        line.push_back(word);
        ch = cin.get();
        if (ch == '\n') {
            cin >> replace;
            cin >> toreplace;
            for (iter = line.begin(); iter != line.end(); ++iter) {
                if (*iter == replace)
                    *iter = toreplace;
            }
            iter = line.begin();
            cout << *iter;
            for (iter = line.begin()+1; iter != line.end(); ++iter) {
                cout << ' ' << *iter; 
            }
            cout << endl;
            line.clear();
        }
    }    
    return 0;
}

