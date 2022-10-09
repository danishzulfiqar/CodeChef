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
        int mean, median, flag = 0;
        cin>>mean>>median;

        for (int i = -1000; i <= 1000; i++)
        {
            for (int j = -1000; j <= 1000; j++)
            {
                int med = median;

                if ((i + j + med) / 3 == mean)
                {
                    cout << i << " " << med << " " << j << endl;
                    flag = 1;
                    break;
                }
            }

            if (flag)
            {
                break;
            }

            cout<<endl;
        }

    }

        return 0;
    }