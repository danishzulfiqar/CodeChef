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
        int discount;
        cin >> discount;

        cout << 100 - discount << endl;
    }
    return 0;
}