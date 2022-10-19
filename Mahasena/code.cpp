#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;

    int arr[n];
    int odd=0,even=0;

    for(int i=0;i<n;i++)
    {
        cin>>arr[n];

        if(arr[n]%2==0)
        even++;

        else
        odd++;
    }

    if(even>odd)
    cout<<"READY FOR BATTLE"<<endl;

    else
    cout<<"NOT READY"<<endl;

    return 0;
}