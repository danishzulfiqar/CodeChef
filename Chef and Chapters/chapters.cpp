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
        int cources, units, chapters;
        cin >> cources >> units >> chapters;

        cout << cources * units * chapters << endl;
    }
    
    return 0;
}