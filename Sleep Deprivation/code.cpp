#include <iostream>
using namespace std;

int main()
{
    int test_cases;
    cin >> test_cases;

    while (test_cases--)
    {
        int x;
        cin >> x;

        if (x < 7)
            cout << "Yes" << endl;

        else
            cout << "No" << endl;
    }

    return 0;
}