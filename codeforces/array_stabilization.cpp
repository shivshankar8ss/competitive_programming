// array stabilization  id(243786003)
// #ares8w

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    v.pop_back();

    int st1 = v[n - 2] - v[0];
    int st2 = v[n - 1] - v[1];
    if (st1 > st2)
    {
        cout << st2 << endl;
    }
    else
    {
        cout << st1 << endl;
    }
    return 0;
}
