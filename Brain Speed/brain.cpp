# include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
    int speed_limit,cheffs_speed;

    cin>>speed_limit>>cheffs_speed;

    if(cheffs_speed>speed_limit)
    cout<<"YES"<<endl;

    else
    cout<<"NO"<<endl;

    return 0;
}