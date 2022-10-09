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
        int n;
        cin >> n;

        int arr1[10] = {0};

        int boxarray[n][5] = {0};

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cin >> boxarray[i][j];
                arr1[boxarray[i][j]] = 1;
            }
        }

        int flag = 1;

        for (int i = 1; i <= 5; i++)
        {
            if (arr1[i] == 0)
            {

                flag = 0;
                break;
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }

        else if(!flag)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}