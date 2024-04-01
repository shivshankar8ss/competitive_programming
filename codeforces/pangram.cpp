// pangram  id(243488961)
// #ares8w

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;

    transform(str.begin(), str.end(), str.begin(), ::tolower);
    set<char> myset;

    for (int i = 0; i < n; i++)
    {
        myset.insert(str[i]);
    }

    if (myset.size() == 26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
