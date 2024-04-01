// football  id(242617021)
// #ares8w

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int c1 = 0;
    char st = str[0];
    for (int i = 0; i < str.length(); i++)
    {
        if (st == str[i])
        {
            c1++;
            if (c1 >= 7)
            {
                break;
            }
        }
        else
        {
            c1 = 1;
            st = str[i];
        }
    }
    if (c1 == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

// #include <iostream>
// #include <string.h>
// using namespace std;

// int main()
// {
//     string str;
//     cin >> str;
//     int c1 = 0;
//     char st = str[0];
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (st == str[i])
//         {
//             c1++;
//             if (c1 >= 7)
//             {
//                 cout << "YES" << endl;
//                 return 0;
//             }
//         }
//         else
//         {
//             c1 = 1;
//             st = str[i];
//         }
//     }
//     cout << "NO" << endl;

//     return 0;
// }