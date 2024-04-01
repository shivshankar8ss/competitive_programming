// way too long words  id(241961928)
// #ares8w

#include <iostream>
#include <string>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string str;
        cin >> str;
        int l = str.length();
        if (l <= 10)
        {
            cout << str << endl;
        }
        else
        {
            char s = str[0];
            char e = str[l - 1];
            cout << s << l - 2 << e << endl;
        }
    }
    return 0;
}