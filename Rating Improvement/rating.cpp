#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
    int test_cases;
    cin >> test_cases;

    while (test_cases--)
    {
        int rating, practice;
        cin >> rating >> practice;

        if ((practice >= rating) && (practice <= rating + 200))
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }
    return 0;
}