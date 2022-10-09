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
        int x;   
        cin>>x;

        if (x > 50)
            cout << "RIGHT" << endl;

        else
            cout << "LEFT" << endl;
    }
    return 0;
}