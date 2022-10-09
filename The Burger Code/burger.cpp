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
        int buns, patties;
        cin >> buns >> patties;

        cout << min(buns, patties)<<endl;;
    }
    return 0;
}