// i love username  id(243358277)
// #ares8w

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int t_count = 0;
    int b_score = arr[0];
    int w_score = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > b_score)
        {
            b_score = arr[i];
            t_count++;
        }
        else if (arr[i] < w_score)
        {
            w_score = arr[i];
            t_count++;
        }
    }
    cout << t_count << endl;
    return 0;
}
