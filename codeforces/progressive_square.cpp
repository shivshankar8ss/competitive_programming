// progressive square id(255688883)
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
        ll n, c, d;
        cin >> n >> c >> d;

        vector<ll> v(n * n);
        for (int i = 0; i < n * n; i++)
        {
            cin >> v[i];
        }

        ll min_e = *min_element(v.begin(), v.end());

        unordered_map<ll, ll> s;
        for (auto e : v)
        {
            s[e]++;
        }

        vector<vector<ll>> matrix(n, vector<ll>(n, 0));
        matrix[0][0] = min_e;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0 && j == 0)
                    continue;

                if (j == 0)
                {
                    matrix[i][j] = matrix[i - 1][j] + d;
                }
                else
                {
                    matrix[i][j] = matrix[i][j - 1] + c;
                }
            }
        }

        bool possible = true;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                ll check = matrix[i][j];
                if (s.find(check) == s.end() || s[check] <= 0)
                {
                    possible = false;
                    break;
                }
                s[check]--;
            }
            if (!possible)
                break;
        }

        if (possible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
