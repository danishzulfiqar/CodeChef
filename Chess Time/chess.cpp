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
        int hours;
        cin>>hours;

        cout << hours * 3 << endl;
    }
    return 0;
}