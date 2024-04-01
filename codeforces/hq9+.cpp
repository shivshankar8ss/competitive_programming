// hq9+  id(243486583)
// #ares8w

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        int as = static_cast<int>(str[i]);
        if (as == 72 || as == 57 || as == 81)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
