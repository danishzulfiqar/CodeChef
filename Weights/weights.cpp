#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
    int test_cases;
    cin >> test_cases;

    while (test_cases--)
    {
        int x, a, b, c;

        cin >> x >> a >> b >> c;

        if (a == x)
        {
            cout << "YES" << endl;
        }
        else if (b == x)
        {
            cout << "YES" << endl;
        }
        else if (c == x)
        {
            cout << "YES" << endl;
        }
        else if (a + b + c == x)
        {
            cout << "YES" << endl;
        }
        else if (a + b == x)
        {
            cout << "YES" << endl;
        }
        else if (a + c == x)
        {
            cout << "YES" << endl;
        }
        else if (b + c == x)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}