// bit++  id(242469468)
// #ares8w

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;

        if (str[0] == '+' && str[1] == '+')
        {
            s++;
        }
        if (str[0] == '-' && str[1] == '-')
        {
            s--;
        }
        if (str[1] == '+' && str[2] == '+')
        {
            s++;
        }
        if (str[1] == '-' && str[2] == '-')
        {
            s--;
        }
    }
    cout << s << endl;
    return 0;
}