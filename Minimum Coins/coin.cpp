#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
    int Test_cases;
    cin >> Test_cases;

    while (Test_cases--)
    {
        int amount;
        cin >> amount;

        cout << amount % 10 << endl;
    }

    return 0;
}