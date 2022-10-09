#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int l, k;
    cin >> l >> k;

    if (l % k == 0)
    {
        cout << 0 << endl;
        return;
    }

    cout << 1 << endl;
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