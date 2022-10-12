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
        int x;
        cin>>x;

        if(x>100)
        cout<<x-10<<endl;

        else
        cout<<x<<endl;
    }
    return 0;
}