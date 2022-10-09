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
        int space, file_1, file_2;
        cin >> space >> file_1 >> file_2;

        int total = file_1 * 1 + file_2 * 2;

        if (total > space)
            cout << "NO" << endl;

        else
            cout << "YES" << endl;
    }
    return 0;
}