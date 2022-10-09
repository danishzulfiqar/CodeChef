#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
    int number_of_services;
    cin >> number_of_services;

    while (number_of_services--)
    {
        int cab_1, cab_2;
        cin >> cab_1 >> cab_2;

        if (cab_1 < cab_2)
            cout << "FIRST" << endl;

        else if (cab_2 < cab_1)
            cout << "SECOND" << endl;

        else if (cab_1 == cab_2)
            cout << "ANY" << endl;
    }

    return 0;
}