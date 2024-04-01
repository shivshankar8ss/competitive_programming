// square id(2419548766)
// ares8w

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> x(4);
        vector<int> y(4);
        for (int i = 0; i < 4; i++)
        {
            cin >> x[i] >> y[i];
        }
        int min = *min_element(x.begin(), x.end());
        int max = *max_element(x.begin(), x.end());

        cout << (max - min) * (max - min) << endl;
    }
    return 0;
}