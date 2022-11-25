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
        int x,y,z;
        cin>>x>>y>>z;

        if(x+y<z)
        cout<<"Yes"<<endl;

        else if(y+z<x)
        cout<<"Yes"<<endl;

        else if(x+z<y)
        cout<<"Yes"<<endl;

        else
        cout<<"No"<<endl;
    }
    
    return 0;
}