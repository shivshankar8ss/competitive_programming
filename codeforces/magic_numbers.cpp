// magic numbers  id(243498741)
// #ares8w

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string str;
    cin >> str;
    ll check = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '1' && str[i + 1] == '4' && str[i + 2] == '4')
        {
            check += 3;
        }

        else if (str[i] == '1' && str[i + 1] == '4')
        {
            check += 2;
        }
        else if (str[i] == '1')
        {
            check += 1;
        }
        else
        {
            continue;
        }
    }
    if (check == str.size())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}