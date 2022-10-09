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
        int weeks, coins, total;

        cin >> weeks >> coins;
        total = weeks * coins;

        cout << total << endl;
    }
    
    return 0;
}