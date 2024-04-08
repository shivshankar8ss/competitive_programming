// special character id(255596284)
// #ares8w
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n % 2 == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            int temp = 0;
            while (n)
            {
                if (temp % 2 == 0)
                {
                    cout << "AA";
                    temp = 1;
                }
                else
                {
                    cout << "BB";
                    temp = 0;
                }
                n -= 2;
            }
            cout << endl;
        }
    }

    return 0;
}