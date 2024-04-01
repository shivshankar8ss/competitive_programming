// plus_minus_split - id(240901206)
// #ares8w
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void penalty()
{

    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll count = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '+')
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    cout << abs(count) << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        penalty();
    }
}
