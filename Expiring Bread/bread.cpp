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
        int x, y, z;
        cin >> x >> y >> z;

        if (y * z >= x)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }
    return 0;
}