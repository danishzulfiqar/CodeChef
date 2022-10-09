#include <iostream>
#include <cstdio>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_cases;
    cin>>test_cases;

    while(test_cases--)
    {
        int x,y,z;
        cin>>x>>y>>z;

        cout<<(2*x+2*y)*z<<endl;
    }
    return 0;
}