// 01 game  id(242723032)
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
        string str;
        cin >> str;
        int zeroes = 0, ones = 0;
        for (int i = 0; i < str.length(); i++)
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

        int min_n = min(zeroes, ones);
        if (min_n % 2 == 0)
        {
            cout << "NET" << endl;
        }
        else
        {
            cout << "DA" << endl;
        }
    }

    return 0;
}
