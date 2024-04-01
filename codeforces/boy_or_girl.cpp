// boy oro girl  id(242960968)
// #ares8w

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string str;
    cin >> str;
    set<char> a;
    for (int i = 0; i < str.length(); i++)
    {
        a.insert(str[i]);
    }
    int l = a.size();
    if (l % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}
