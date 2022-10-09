#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        if ((x * y) <= z)
        {
            cout << "Yes" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}