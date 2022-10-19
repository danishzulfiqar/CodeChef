#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int arr[n],counter=0;

        for(int i=0;i<n;i++)
        {
            cin>>arr[n];
            if(arr[n]>=1000)
            counter++;
        }

        cout<<counter<<endl;

    }
    return 0;
}