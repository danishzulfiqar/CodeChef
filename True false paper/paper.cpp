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
        int total, correct;
        cin >> total >> correct;

        cout << total - correct << endl;
    }
    return 0;
}