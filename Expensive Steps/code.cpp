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
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;

        if (a < 1 && b > n && c < 1 && d > n)
        {
            cout << 0 << endl;
            continue;
        }

        else if (a < 1 || b > n)
        {
            cout << min(min(n - c + 1, n - d + 1), min(c, d)) << endl;
            continue;
        }

        else if (c < 1 || d > n)
        {
            cout << min(min(n - a + 1, n - b + 1), min(a, b)) << endl;
            continue;
        }

        int x = min(min(n - a + 1, n - b + 1), min(a, b));
        int y = min(min(n - c + 1, n - d + 1), min(c, d));
        int ans = abs(a - c) + abs(b - d);
        cout << min(ans, x + y) << endl;
    }

    return 0;
}