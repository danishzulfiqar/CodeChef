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
        int total, left, added;
        cin >> total >> left >> added;

        total = (total - left) + added;

        cout << total << endl;
    }
    return 0;
}