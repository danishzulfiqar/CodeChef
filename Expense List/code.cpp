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
        int expences,income;
        cin>>expences>>income;

        income=pow(2,income);

        int calc=income;

        while(expences--)
        {
            calc /= 2;

            income -= calc;
        }

        cout<<income<<endl;
    }
    
    return 0;
}