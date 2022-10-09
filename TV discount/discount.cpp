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
        int tv1, tv2, disc1, disc2;

        cin >> tv1 >> tv2 >> disc1 >> disc2;

        if (tv1 - disc1 < tv2 - disc2)
            cout << "First" << endl;

        else if (tv2 - disc2 < tv1 - disc1)
            cout << "Second" << endl;

        else
            cout << "Any" << endl;
    }
    
    return 0;
}