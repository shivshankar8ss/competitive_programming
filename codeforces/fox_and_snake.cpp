// fox and snake  id(243353579)
// #ares8w

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    int n, m;
    cin >> n >> m;
    int temp = 1;
    for (int i = 0; i < n; i++)
    {

        if (i % 2 == 0)
        {
            for (int j = 0; j < m; j++)
            {
                cout << "#";
            }
            cout << endl;
        }
        else
        {
            if (temp == 1)
            {
                for (int j = 0; j < m - 1; j++)
                {
                    cout << ".";
                }
                cout << "#" << endl;
                temp = 2;
            }
            else if (temp == 2)
            {
                cout << "#";
                for (int j = 1; j < m; j++)
                {
                    cout << ".";
                }

                temp = 1;
                cout << endl;
            }
        }
    }
    return 0;
}
