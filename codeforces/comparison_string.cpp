// comparison string  id(243215031)
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
        int c1 = 0, c2 = 0;
        char s = str[0];
        for (int i = 0; i < n; i++)
        {
            if (s == str[i])
            {
                c1++;
                c2 = max(c2, c1);
            }
            else
            {
                c1 = 1;
                s = str[i];
            }
        }
        cout << c2 + 1 << endl;
    }
    return 0;
}
