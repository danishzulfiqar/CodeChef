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
        int x, y;
        cin >> x >> y;

        if (x < y)
            cout << x << endl;

        else
        {

            if (x % y == 0)
                cout << x / y << endl;

            else
                cout << (x / y) + (x % y) << endl;
        }
    }

    return 0;
}