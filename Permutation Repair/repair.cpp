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
        int a;
        cin >> a;
        int arr1[a];

        for (int i = 0; i < a; i++)
        {
            cin >> arr1[i];
        }

        int b;
        cin >> b;
        int arr2[b];

        for(int i=0;i<b;i++)
        {
            cin>>arr2[i];
        }

        for(int i=0;i<a;i++)
        {
            int flag=1;

            for(int j=0;j<b;j++)
            {
                if(arr1[i] == arr2[j])
                {
                    flag=0;
                }
            }

            if(flag)
            cout<<arr1[i]<<" ";
        }

        cout<<endl;

    }
    return 0;
}