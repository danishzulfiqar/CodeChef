#include <iostream>
#include <cstdio>
#include <iomanip>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_case;
    cin>>test_case;

    while(test_case--)
    {
        int n;
        cin>>n;
        int arr[n];

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        sort(arr,arr+n);

        for(int i=0;i<n;i=i+2)
        {
            if(arr[i] != arr[i+1])
            {
            cout<<arr[i]<<endl;
            break;
            }
        }


    }
    return 0;
}