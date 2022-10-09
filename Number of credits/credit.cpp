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

        cout << x * 4 + y * 2 << endl;
    }
    return 0;
}