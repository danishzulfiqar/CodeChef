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
        int w,x,y,z;
        cin>>w>>x>>y>>z;

        cout<<(w+(x*z)-(y*z))<<endl;
    }
    return 0;
}