#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
    int number_of_characters;
    cin >> number_of_characters;

    if (number_of_characters <= 1000)
        cout << "Yes" << endl;

    else
        cout << "No" << endl;
        
    return 0;
}