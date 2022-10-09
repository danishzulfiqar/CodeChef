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
        int weeks, days_past, total_days, days_rem;
        cin >> weeks >> days_past;

        total_days = 7 * weeks;

        days_rem = total_days - days_past;

        cout << days_rem << endl;
        
    }
    return 0;
}