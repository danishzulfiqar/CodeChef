#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int d = abs(a - b);

        if (d % 2 == 0)
        {
            cout << "Yes" << endl;
        }

        else
            cout << "No" << endl;
    }
    return 0;
}