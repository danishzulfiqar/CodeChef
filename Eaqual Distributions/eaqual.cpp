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
        int x, y;
        cin >> x >> y;

        if ((x + y) % 2 == 0)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }
    return 0;
}