// rook  id(243780129)
// #ares8w

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char c;
        int n;
        cin >> c >> n;
        for (int i = 1; i <= 8; i++)
        {
            if (i != n)
            {
                cout << c << i << endl;
            }
        }
        for (char i = 'a'; i <= 'h'; i++)
        {
            if (i != c)
            {
                cout << i << n << endl;
            }
        }
    }
    return 0;
}
