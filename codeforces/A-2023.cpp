// A-2023 id(240958924)
// #ares8w
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)

    {
        ll n, k, mult = 1;
        cin >> n >> k;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            mult *= a[i];
        }
        if (2023 % mult == 0)
        {
            cout << "YES" << endl;
            cout << (2023 / mult) << " ";
            for (ll i = 0; i < k - 1; i++)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
