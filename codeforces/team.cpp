// team   id(242467262)
// #ares8w

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int v1[3];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int s = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> v1[j];
            s += v1[j];
        }
        if (s >= 2)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}