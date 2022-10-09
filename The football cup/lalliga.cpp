#include <iostream>
#include <cstdio>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        int x, y;
        cin >> x >> y;

        if (x == y && (x && y) >= 1)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }
    return 0;
}