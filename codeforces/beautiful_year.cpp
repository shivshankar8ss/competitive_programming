// beautiful_year  id(243229028)
// #ares8w

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    int y;
    cin >> y;
    for (int i = y + 1; i <= 9012; i++)
    {
        string st = to_string(i);
        if (st[0] != st[1] && st[1] != st[2] && st[2] != st[3] && st[0] != st[2] && st[0] != st[3] && st[1] != st[3])
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
