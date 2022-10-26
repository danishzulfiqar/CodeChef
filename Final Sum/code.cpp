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
        int num, k, j = 0, x;
        cin >> num >> k;

        for (int i = 1; i <= num; ++i)
        {
            cin >> x;
            j = j + x;
        }

        for (int i = 1; i <= k; ++i)
        {
            int y, z;
            cin >> y >> z;
            j = j + (z - y + 1) % 2;
        }

        cout << j << endl;
    }
    return 0;
}