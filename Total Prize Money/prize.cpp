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
        int top_10, rem_prt, total;
        cin >> top_10 >> rem_prt;

        total = 10 * top_10 + rem_prt * 90;

        cout << total << endl;
    }
    return 0;
}