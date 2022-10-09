#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
    int total, apple, orange;
    cin >> total;
    cin >> apple >> orange;

    if (apple + orange <= total)
        cout << "YES" << endl;

    else
        cout << "NO" << endl;

    return 0;
}