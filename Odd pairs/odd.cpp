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
        long n;
        cin >> n;
        long even = n / 2;
        long odd = n - even;
        long res = odd * even;
        long ans = res * 2;

        cout << ans << endl;
    }
    return 0;
}