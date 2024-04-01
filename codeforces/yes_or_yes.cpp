// yes or yes  id(243355378)
// #ares8w

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string str;
//         cin >> str;
//         transform(str.begin(), str.end(), str.begin(), ::tolower);
//         if (str == "yes")
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }

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
        if ((str[0] == 121 || str[0] == 89) && (str[1] == 101 || str[1] == 69) && (str[2] == 115 || str[2] == 83))
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