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
        int n, amount;
        cin >> n >> amount;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= amount)
            {
                cout << "1";
                amount -= arr[i];
            }

            else
                cout << "0";
        }

        cout<<endl;
    }
    return 0;
}