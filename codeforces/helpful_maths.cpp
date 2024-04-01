// helpful maths  id(242715758)
// ares8w

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string str, ans;
    cin >> str;
    vector<int> v;
    for (int i = 0; i < str.length(); i += 2)
    {
        v.push_back(str[i] - '0');
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        ans += to_string(v[i]);
        // check current element is not last element
        if (i < v.size() - 1)
        {
            ans += '+';
        }
    }
    cout << ans << endl;
    return 0;
}