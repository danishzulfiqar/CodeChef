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
        int minutes, limit = 30;
        cin >> minutes;

        if (minutes > limit)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }
    return 0;
}