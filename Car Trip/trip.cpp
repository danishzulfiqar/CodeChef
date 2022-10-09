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
        int distance, least_limit = 300, cost = 10;
        cin >> distance;
        if (distance <= 300)
            cout << least_limit * cost << endl;

        else
            cout << distance * cost << endl;
    }
    return 0;
}