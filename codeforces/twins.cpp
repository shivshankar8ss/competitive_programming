// twins  id(252879604)
// #ares8w

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0, ans = 0, s1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        s1 += arr[i];
        sum -= arr[i];
        ans++;
        if (s1 > sum)
        {
            cout << ans << endl;
            return 0;
        }
    }

    return 0;
}
