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
        int required, total;
        cin >> required >> total;

        if (total >= required)
            cout << "0" << endl;

        else
            cout << required - total << endl;
    }
    return 0;
}