#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
    cout.precision(2);

    int amount;
    float balance;

    cin >> amount >> balance;

    if ((amount % 5 == 0) && ((balance - amount) - 0.50 >= 0))
    {
        cout << fixed << (balance - amount) - 0.50 << endl;
    }

    else
        cout << fixed << balance << endl;

    return 0;
}