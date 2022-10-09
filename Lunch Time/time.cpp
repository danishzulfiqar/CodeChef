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
        int time;
        cin >> time;

        if (time >= 1 && time <= 4)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}