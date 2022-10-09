#include <iostream>
#include <cstdio>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_cases;
    cin >> test_cases;

    while (test_cases--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if ((a + b + c >= 100))
        {
            if ((a >= 10) && (b >= 10) && (c >= 10))
                cout << "PASS" << endl;

            else
                cout << "Fail" << endl;
        }

        else
            cout << "Fail" << endl;
    }
    return 0;
}