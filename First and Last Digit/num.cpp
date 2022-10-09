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
        int num;
        cin >> num;
        int last = num % 10; // for extracting last digit
        int first = num;

        while (first > 9) // for extracting first digit
        {
            first = first / 10;
        }

        cout << first + last << endl;
    }

    return 0;
}