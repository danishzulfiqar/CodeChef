#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
    int number_of_tests;
    cin >> number_of_tests;

    while (number_of_tests--)
    {
        int index_1, index_2;
        cin >> index_1 >> index_2;

        cout << abs(index_1 - index_2) << endl;
    }
    return 0;
}