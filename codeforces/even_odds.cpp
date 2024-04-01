// even odds   id(242107829)
// #ares8w

// #include <iostream>
// #include <vector>
// using namespace std;
// #define ll long long

// int main()
// {
//     ll n, k;
//     cin >> n >> k;
//     vector<ll> v;
//     for (ll = 1; i < = n; i++)
//     {
//         if (i % 2 != 0)
//         {
//             v.push_back(i);
//         }
//     }
//     for (ll i = 1; i < = n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             v.push_back(i);
//         }
//     }
//     cout << v[k + 1] << endl;
//     return 0;
// }

#include <iostream>
using namespace std;
#define ll long long

int main()
{
    ll n, k;
    cin >> n >> k;
    ll result;
    if (k <= (n + 1) / 2)
    {
        result = 2 * k - 1;
    }
    else
    {
        result = 2 * (k - (n + 1) / 2);
    }

    cout << result << endl;

    return 0;
}
