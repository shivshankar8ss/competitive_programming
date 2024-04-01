// caps lock  id(243886076)
// ares8w

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int count = 0;
    for (int i = 1; i < str.length(); i++)
    {
        if (isupper(str[i]))
        {
            count++;
        }
    }
    string ans = "";

    if (count == str.length() - 1)
    {
        if (isupper(str[0]))
        {
            ans += tolower(str[0]);
        }
        else
        {
            ans += toupper(str[0]);
        }
        for (int i = 1; i < str.length(); i++)
        {
            ans += tolower(str[i]);
        }
        cout << ans << endl;
    }
    else
    {
        cout << str << endl;
    }

    return 0;
}
