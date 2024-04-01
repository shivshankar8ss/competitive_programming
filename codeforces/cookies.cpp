// cookies   id(242717370)
// ares8w

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if ((sum - arr[i]) % 2 == 0)
        {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}