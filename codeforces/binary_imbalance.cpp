// binary imbalance  id(243213124)
// #ares8w

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int ones = 0, zeroes = 0, temp = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '0')
            {
                zeroes++;
            }
            else
            {
                ones++;
            }
        }
        if (zeroes > ones)
        {
            cout << "YES" << endl;
        }
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (str[i] != str[i + 1])
                {
                    temp = 1;
                    break;
                }
            }
            if (temp == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}
