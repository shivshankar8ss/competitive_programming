// least product  id(240963325)
// #ares8w
#include <bits/stdc++.h>
using namespace std;
#define ll long long
// code
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll count = 0;
        ll x = 0;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
            {
                x = 1;
            }
            if (arr[i] < 0)
            {
                count++;
            }
        }

        if (count % 2 != 0 || x == 1)
        {
            cout << "0" << endl;
        }

        else
        {
            cout << "1" << endl;
            cout << "1"
                 << " "
                 << "0" << endl;
        }
    }
    return 0;
}
