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
        int dis, cth;
        cin >> dis >> cth;

        if (dis * 100 >= cth * 10)
            cout << "CLOTH" << endl;

        else
            cout << "DISPOSIBLE" << endl;
    }

    return 0;
}