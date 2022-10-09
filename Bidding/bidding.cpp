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
        int a, b, c;
        cin >> a >> b >> c;

        int maximum = max(a, max(b, c));

        if (a == maximum)
            cout << "Alice" << endl;

        else if (b == maximum)
            cout << "Bob" << endl;

        else
            cout << "Charlie" << endl;
    }
    
    return 0;
}