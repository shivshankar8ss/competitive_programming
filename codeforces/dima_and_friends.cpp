// dima and friends  id(244223065)
// #ares8w

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    for (int i = 1; i <= 5; i++)
    {
        if ((sum + i) % (n + 1) != 1)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
