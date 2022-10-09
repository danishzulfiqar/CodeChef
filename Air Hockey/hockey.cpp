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
        int a, b;
        cin >> a >> b;

        cout << 7 - max(a, b) << endl;
    }
    return 0;
}