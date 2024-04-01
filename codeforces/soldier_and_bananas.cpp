// soldier and bananas  id(242712879)
// #ares8w

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll k, n, w;
    cin >> k >> n >> w;
    ll s = (w * (w + 1) / 2) * k;
    if (n >= s)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << s - n << endl;
    }

    return 0;
}