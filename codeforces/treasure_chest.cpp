// treasure chest id(241697813)
// #ares8w

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        if (y <= x)
        {
            cout << x << endl;
        }
        else if (y > x && (y - x) <= k)
        {
            cout << y << endl;
        }
        else
        {
            cout << 2 * y - x - k << endl;
        }
    }
    return 0;
}