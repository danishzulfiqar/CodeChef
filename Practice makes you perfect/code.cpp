#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int arr[4],counter=0;

    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
        if(arr[i]>=10)
        counter++;
    }

    cout<<counter<<endl; 
    return 0;
}