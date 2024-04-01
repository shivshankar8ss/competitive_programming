// goals of victory  id(241899672)
// ares8w

#include <iostream>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n - 1];
        int s = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            cin >> arr[i];
            s += arr[i];
        }
        cout << -s << endl;
    }
    return 0;
}