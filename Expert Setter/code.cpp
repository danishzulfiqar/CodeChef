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
        float x,y;
        cin>>x>>y;

        if(y>=(x/2))
        cout<<"YES"<<endl;

        else
        cout<<"NO"<<endl;
    }
    return 0;
}