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
        int temp;
        cin>>temp;

        if (temp > 20)
            cout << "HOT" << endl;

        else
            cout << "COLD" << endl;
    }
    return 0;
}