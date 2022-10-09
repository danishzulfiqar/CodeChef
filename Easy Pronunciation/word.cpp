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
        int n, i = 0, counter = 0, flag = 1;
        string str;
        cin >> n;
        cin >> str;

        for (i = 0; i < str.size(); i++)
        {
            {
                if ((str[i] != 'a') && (str[i] != 'e') && (str[i] != 'i') && (str[i] != 'o') && (str[i] != 'u'))
                {
                    counter += 1;
                }

                else
                {
                    counter = 0;
                }
            }

            if (counter >= 4)
            {
                cout << "NO" << endl;
                flag = 0;
                break;
            }
        }

        if (flag)
            cout << "YES" << endl;
    }

    return 0;
}