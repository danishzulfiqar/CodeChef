# include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
    int total,didnt_solve,not_correct;

    cin>>total>>didnt_solve>>not_correct;

    int valid=total-didnt_solve;
    int strictly_rated=valid-not_correct;

    cout<<valid<<" "<<strictly_rated<<endl;
    
    return 0;
}