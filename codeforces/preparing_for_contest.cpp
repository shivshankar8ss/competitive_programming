// preparing for contest id(241472951)
// #ares8w

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solve_test_case(int n, int k)
{
    vector<int> order;
    for (int i = n; i > k + 1; i--)
    {
        order.push_back(i);
    }
    for (int i = 1; i < k + 2; i++)
    {
        order.push_back(i);
    }
    return order;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        int n, k;
        cin >> n >> k;
        vector<int> result = solve_test_case(n, k);
        for (int j = 0; j < n; ++j)
        {
            cout << result[j] << " ";
        }
        cout << endl;
    }

    return 0;
}
