#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{

    int total, attempted, unattempted;
    cin >> total >> attempted;
    unattempted = total - attempted;

    cout << unattempted << endl;

    return 0;
}