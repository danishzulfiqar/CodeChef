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
        int x, y;
        cin >> x >> y;

        if (x >= y)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }
    return 0;
}