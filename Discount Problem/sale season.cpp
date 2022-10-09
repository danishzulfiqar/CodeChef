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
        int amount, discount;

        cin >> amount;

        if (amount <= 100)
            discount = 0;

        else if ((amount>100) && (amount<=1000))
            discount = 25;

        else if ((amount>1000) && (amount<=5000))
            discount = 100;

        else
            discount = 500;

        int total = amount - discount;

        cout << total << endl;
    }

    return 0;
}