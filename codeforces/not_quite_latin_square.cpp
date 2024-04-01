// not quite latin square id(241472951)
//  #ares8w

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char arr[3][3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> arr[i][j];
            }
        }
        int c = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                int ascii = static_cast<int>(arr[i][j]);
                c += ascii;
            }
        }
        // int k = c - 63;
        int diff = 594 - c + 63;
        char ch = static_cast<char>(diff);
        cout << ch << endl;
    }
}