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
        int marks_1, marks_2;
        cin >> marks_1 >> marks_2;

        cout << max(marks_1, marks_2) << endl;
    }
    return 0;
}