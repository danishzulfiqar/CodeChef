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

        if (y < x)
            cout << "Profit" << endl;

        else if (y < x)
            cout << "Loss" << endl;

        else
            cout << "Neutral" << endl;
    }

    return 0;
}