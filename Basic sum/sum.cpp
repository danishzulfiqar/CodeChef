#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int num1, num2;
        cin>>num1>>num2;

        cout << num1 + num2 << endl;
    }
    return 0;
}