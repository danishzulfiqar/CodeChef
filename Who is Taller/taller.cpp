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
        int x, y;
        cin >> x >> y;

        if (x > y)
            cout << "A" << endl;

        else
            cout << "B" << endl;
    }
    return 0;
}