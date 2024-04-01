// mahmud and triangle  id(244838389)
// #ares8w

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, temp = 0;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (ll i = 0; i < n - 2; i++)
    {
        if (arr[i] + arr[i + 1] <= arr[i + 2])
        {
            temp++;
        }
    }
    if (temp < n - 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
