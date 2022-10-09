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
        int points, cases;
        cin >> points >> cases;
        points /= 10;

        cout << points * cases << endl;
    }
    return 0;
}