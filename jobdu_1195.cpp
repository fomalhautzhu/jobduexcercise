#include <iostream>
#include <vector>

using namespace std;

struct text {
    string str;
    int len;
};

int main()
{
    vector<text> vec;
    vector<text>::size_type i;
    struct text temp;
    while (cin >> temp.str && !cin.eof()) {
        temp.len = temp.str.length();
        vec.push_back(temp);
    }
    int shortest = 1000, longest = 0;
    for (i = 0; i < vec.size(); ++i) {
        if (vec[i].len > longest) {
            longest = vec[i].len;
        }
        if (vec[i].len < shortest) {
            shortest = vec[i].len;
        }
    }
    
    for (i = 0; i < vec.size(); ++i) {
        if (vec[i].len == shortest)
            cout << vec[i].str << endl;
    }
    
    for (i = 0; i < vec.size(); ++i) {
        if (vec[i].len == longest)
            cout << vec[i].str << endl;
    }
    
    return 0;
}
