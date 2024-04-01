// elephant  id(242102536)
// ares8w

#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    int count = 0;
    if (x % 5 == 0)
    {
        cout << x / 5 << endl;
    }
    else
    {
        cout << x / 5 + 1 << endl;
    }

    return 0;
}