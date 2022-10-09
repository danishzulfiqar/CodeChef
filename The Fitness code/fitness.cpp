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
        int distance, repetitions = 2 * 5;
        cin >> distance;

        cout << distance * repetitions << endl;
    }
    return 0;
}