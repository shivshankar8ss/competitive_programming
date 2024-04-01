// arranging cats  id(241955454)
// ares8w

#include <iostream>
#include <string>
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
        string s, f;
        cin >> s >> f;
        int count1 = 0, count2 = 0;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] != f[i] && s[i] == '1')
            {
                count1++;
            }
            else if (s[i] != f[i] && s[i] == '0')
            {
                count2++;
            }
        }
        if (count1 > count2)
        {
            cout << count1 << endl;
        }
        else
        {
            cout << count2 << endl;
        }
    }
    return 0;
}