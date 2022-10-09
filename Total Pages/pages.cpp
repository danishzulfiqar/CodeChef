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
        int pages, words;
        cin >> pages >> words;

        cout << pages * words << endl;
    }
    return 0;
}