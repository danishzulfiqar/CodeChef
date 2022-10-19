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

        string str;
        cin>>str;

        int counter=0;
        char previous;

        if(str[0]=='0')
        previous='1';

        else
        previous='0';
        
       
        for(int i=0;i<n;i++)
        {

            if(previous==str[i])
            counter++;

            previous=str[i];
        }

        cout<<counter<<endl;
    }
    return 0;
}