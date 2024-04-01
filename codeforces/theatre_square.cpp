// theatre square  id(244225586)
// #ares8w

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, m, a;
    cin >> n >> m >> a;
    ll nf = ceil((double)n / a);
    ll mf = ceil((double)m / a);
    cout << nf * mf << endl;

    return 0;
}
