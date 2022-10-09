#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int a, b, x;
    cin >> a >> b >> x;

    if (a == b)
    {
        cout << "YES" << endl;
        return;
    }

    int diff = abs(a - b);

    if ((diff != x) && (diff % x == 0))
    {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
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