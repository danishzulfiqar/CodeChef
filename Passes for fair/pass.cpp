#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        int friends, passes;
        cin>>friends>>passes;

        if (passes > friends)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }
    return 0;
}