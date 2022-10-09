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
        int rep, np;
        cin >> rep >> np;

        if (rep < np)
            cout << "REPAIR" << endl;

        else if (np < rep)
            cout << "New Phone" << endl;

        else
            cout << "any" << endl;
    }
    return 0;
}