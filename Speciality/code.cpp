#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        int maximum = max(x, max(y, z));

        if (x == maximum)
            cout << "setter" << endl;

        else if (y == maximum)
            cout << "tester" << endl;

        else if (z == maximum)
            cout << "editorialist" << endl;
    }

    return 0;
}