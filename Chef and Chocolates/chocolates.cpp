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
        int x, y, z;
        cin >> x >> y >> z;

        int total = 5 * x + 10 * y;

        cout << total / z << endl;
    }

    return 0;
}