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
        int a, b, c, frst, last, second;
        cin >> a >> b >> c;

        frst = min(a, min(b, c));
        last = max(a, max(b, c));

        if (a != frst && a != last)
            cout << a << endl;

        else if (b != frst && b != last)
            cout << b << endl;

        else if (c != frst && c != last)
            cout << c << endl;
    }
    return 0;
}