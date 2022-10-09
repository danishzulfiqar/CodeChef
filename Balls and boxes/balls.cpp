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
        int balls, boxes;
        cin >> balls>>boxes;

        if (balls < boxes)
        {
            cout << "NO" << endl;
            continue;;
        }

        else if(balls==1 && boxes==1)
        {
            cout<<"YES"<<endl;
            continue;;
        }

        if (balls / boxes > boxes)
        {
            cout << "Yes" << endl;
            continue;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}