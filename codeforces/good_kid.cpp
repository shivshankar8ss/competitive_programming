// good kid   id(242619540)
// ares8w

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main()
// {
//     ll t;
//     ;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int arr[n];
//         int prod = 1;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         int *minEle = min_element(arr, arr + n);
//         int minIdx = distance(arr, minEle);
//         // arr[minIdx] = arr[minIdx] + 1;
//         arr[minIdx]++;
//         for (int i = 0; i < n; i++)
//         {
//             prod *= arr[i];
//         }
//         cout << prod << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    ;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int prod = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int a = arr[0];
        int idx = 0;
        // int *minEle = min_element(arr, arr + n);
        // int minIdx = distance(arr, minEle);
        // arr[minIdx]++;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] < a)
            {
                a = arr[i];
                idx = i;
            }
        }
        arr[idx]++;

        for (int i = 0; i < n; i++)
        {
            prod *= arr[i];
        }
        cout << prod << endl;
    }

    return 0;
}
