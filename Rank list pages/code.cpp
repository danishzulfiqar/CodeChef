#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
       int page=0;

       int x;
       cin>>x;
       
       for(int i=1;i<=x;i+=25)
       {
        page++;
       }

       cout<<page<<endl;

    }
    return 0;
}