#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
    int Test_cases;
    cin >> Test_cases;

    while (Test_cases--)
    {
        int x, y;

        cin >> x >> y;

        cout << min(3 * x, y * 2) << endl;
    }
    
    return 0;
}