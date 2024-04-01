// morning id(241754040)
// ares8w

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int prev = 1, curr = 0, time = 0;
        for (int i = 0; i < 4; i++)
        {
            curr = str[i] - '0';
            if (curr == 0)
            {
                curr = 10;
            }
            time += (abs(curr - prev) + 1);
            prev = curr;
        }
        cout << time << endl;
    }
    return 0;
}
