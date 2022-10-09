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

        if ((a % b == 0) && (a / b % 2 == 0))
            cout << "Yes" << endl;

        else
            cout << "No" << endl;
    }
    return 0;
}