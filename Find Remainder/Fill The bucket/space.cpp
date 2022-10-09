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
        int capacity, filled;
        cin >> capacity >> filled;

        cout << capacity - filled << endl;
    }
    return 0;
}