#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>

using namespace std;

struct bign
{
    int len, s[1000];
    bign() 
    {
        memset(s, 0, sizeof(s));
        len = 1;
    }
    bign(int num) 
    {
        *this = num;
    }
    bign(const char* num)
    {
        *this = num;
    }
    bign operator=(const char* num)
    {
        len = strlen(num);
        for (int i = 0; i < len; i++)
            s[i] = num[len-i-1] - '0';
        return *this;
    }
    bign operator=(int num)
    {
        char s[1000];
        sprintf(s, "%d", num);
        *this = s;
        return *this;
    }
    string str() const
    {
        string res = "";
        for (int i = 0; i < len; i++)
            res = (char)(s[i] + '0') + res;
        if (res == "")
            res = "0";
        return res;
    }
    bign operator+(const bign& b) const
    {
        bign c;
        c.len = 0;
        for (int i = 0, g = 0; g || i < max(len, b.len); i++) {
            int x = g;
            if (i < len) 
                x += s[i];
            if (i < b.len)
                x += b.s[i];
            c.s[c.len++] = x % 10;
            g = x / 10;
        }
        return c;
    }
};

istream& operator>>(istream &in, bign& x)
{
    string s;
    in >> s;
    x = s.c_str();
    return in;
}

ostream& operator<<(ostream &out, const bign& x)
{
    out << x.str();
    return out;
}

int main()
{
    char str1[1000], str2[1000];
    while (scanf("%s %s", str1, str2) != EOF) {
        bign b1 = str1;
        bign b2 = str2;
        bign b = b1 + b2;
        cout << b << endl;
    }
    return 0;
}

