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

        if ((x - y) % 2 == 0)
            cout << (x + y) / 2 << endl;

        else
            cout << "-1" << endl;
    }

    return 0;
}