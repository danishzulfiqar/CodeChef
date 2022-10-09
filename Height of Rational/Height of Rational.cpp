#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if ((a < 1) || (a > 100))
    {
        exit(0);
    }

    else if ((b < 1) || (b > 100))
    {
        exit(0);
    }

    cout << max(a, b);

    return 0;
}