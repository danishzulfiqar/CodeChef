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

        if (y % x)
        {
            if (y > 2 * x)
                cout << "Yes" << endl;

            else
                cout << "No" << endl;
        }

        else
            cout << "Yes" << endl;
    }
    return 0;
}