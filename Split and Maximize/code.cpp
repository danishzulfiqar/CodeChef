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
        int n, k = 0;
        long long s = 0;

        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            s = (s + arr[i]) % 998244353;
        }

        s = (s * (s - 1)) % 998244353;
        cout << s << endl;
    }

    return 0;
}