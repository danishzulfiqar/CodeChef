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
        int budget, bill;

        cin >> budget >> bill;

        if (bill > budget)
            cout << "NO" << endl;

        else
            cout << "YES" << endl;
    }
    return 0;
}