#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int x, y, a;
        cin >> x >> y >> a;

        if ((x < 20) || (x > 40) || (y < 20) || (y > 40) || (y < 10) || (y > 50))
            continue;

        if (a >= x && a < y)
            cout << "Yes" << endl;

        else
            cout << "No" << endl;
    }
    return 0;
}