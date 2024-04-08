// yogurt sale  id(255648140)
// ares8w

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        if (b < a * 2)
        {
            if (n % 2 == 0)
            {
                cout << (n / 2) * b << endl;
            }
            else
            {
                cout << (n / 2) * b + a << endl;
            }
        }
        else
        {
            cout << n * a << endl;
        }
    }
    return 0;
}