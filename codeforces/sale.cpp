// sale id(242472980)
// #ares8w

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main()
// {
//     ll n, m;
//     cin >> n >> m;
//     ll sum = 0;
//     ll v[n];
//     for (ll i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     sort(v, v + n);

//        for (ll i = 0; i < m; i++)
//     {
//         sum += v[i];
//     }

//     cout << abs(sum) << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, m, t = 0, sum = 0;
    cin >> n >> m;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (ll i = 0; i < n; i++)
    {
        if (arr[i] < 0 && t < m)
        {
            sum += arr[i];
            t++;
        }
    }
    cout << abs(sum) << endl;
}
