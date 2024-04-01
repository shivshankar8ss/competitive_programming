// ambitious kid id(241900930)
// ares8w
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < 0)
        {
            arr[i] = abs(arr[i]);
        }
    }
    ll k = *min_element(arr, arr + n);
    cout << abs(k) << endl;

    return 0;
}