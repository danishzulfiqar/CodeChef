#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define int long long

void solve()
{
    int n, q;
    cin >> n >> q;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    while (q--)
    {
        int i, x;
        cin >> i >> x;
        arr[i - 1] = x;

        int mx = 0;

        for (int j = 0; j < n-1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                mx = max(mx, abs(arr[j] - arr[j + 1]));
            }
        }

        cout << mx << endl;
    }
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