#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    if ((test_case < 1) || (test_case > 100))
        exit(0);

    while (test_case--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (((a < 1) || (a > 100)) || ((b < 1) || (b > 100)) || ((c < 1) || (c > 100)))
        {
            continue;
        }

        if ((b >= a) && (b >= c))
            cout << "Yes" << endl;

        else
            cout << "No" << endl;
    }

    return 0;
}