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
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b == c)
            cout << "Yes" << endl;

        else if (a + c == b)
            cout << "Yes" << endl;

        else if (c + b == a)
            cout << "Yes" << endl;

        else
            cout << "No" << endl;
    }

    return 0;
}