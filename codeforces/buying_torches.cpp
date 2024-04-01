// buying torches  id(244552021)
// #ares8w

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y, k;
        cin >> x >> y >> k;
        ll ans = 0;
        ll temp = k + (y * k) - 1;
        if (temp % (x - 1) == 0)
        {
            ans = ((temp / (x - 1)) + k);
        }
        else
        {
            ans = ((temp / (x - 1)) + k + 1);
        }
        cout << ans << endl;
    }
    return 0;
}
