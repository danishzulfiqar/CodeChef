#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;

    if (n < 4)
    {
        cout << -1 << endl;
        return;
    }

    if (n == 4)
    {
        cout << 2 << " " << 4 << " " << 1 << " " << 3 << endl;
        return;
    }

    for (int i = 1; i <= n; i += 2)
    {
        cout << i << " ";
    }

    for (int i = 2; i <= n; i += 2)
    {
        cout << i << " ";
    }

    cout << endl;
    return;
}

signed main()
{
    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        solve();
    }

    return 0;
}