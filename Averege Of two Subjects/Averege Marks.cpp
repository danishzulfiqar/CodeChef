#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int a, b, c;
        int counter = 0;
        cin >> a >> b >> c;
        {
            if (((a + b) / 2) < 35)
            {
                counter = counter + 1;
            }

            if (((b + c) / 2) < 35)
            {
                counter = counter + 1;
            }

            if (((a + c) / 2) < 35)
            {
                counter = counter + 1;
            }
        }

        if (counter == 0)
        {
            cout << "Pass"<< endl;
        }

        else
        {
            cout << "Fail"<< endl;
        }
    }
    return 0;
}