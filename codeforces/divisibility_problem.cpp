// divisibility problems  id(243781151)
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
        ll a, b;
        cin >> a >> b;
        if (a % b == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << abs(b - (a % b)) << endl;
        }
    }
    return 0;
}
