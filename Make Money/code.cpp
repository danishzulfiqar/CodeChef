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
        int n, x, y, c = 0;
        long long ans = 0;
        cin >> n >> x >> y;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (x - arr[i] > y)
            {
                ans = ans + x;
                c = c + y;
            }

            else
                ans = ans + arr[i];
        }

        cout << ans - c << endl;
    }

    return 0;
}