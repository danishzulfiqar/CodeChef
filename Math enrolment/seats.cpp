#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        int seats, students;
        cin >> seats >> students;

        if (students > seats)
            cout << students - seats << endl;

        else
            cout << "0" << endl;
    }
    return 0;
}