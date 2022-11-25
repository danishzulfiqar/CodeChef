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
        int x, y, z, k;
        cin >> x >> y >> z >> k;
        if (k % ((x * z) + y) == 0)
        {
            cout << "Yes" << endl;
        }

        else if (k % ((x * z) + y) - (x * (z - 1)) > 0)
        {
            cout << "Yes" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}