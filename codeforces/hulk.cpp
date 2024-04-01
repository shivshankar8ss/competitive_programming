// hulk   id(242101753)
// #ares8w

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string feel = "";
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            feel += "I hate";
        }

        else
        {
            feel += "I love";
        }
        if (i < n)
        {
            feel += " that ";
        }
    }
    cout << feel << " it" << endl;
    return 0;
}