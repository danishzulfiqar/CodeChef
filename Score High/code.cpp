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
        int n;
        cin >> n;

        int a, b, c, d;
        cin >> a>> b>> c>> d;

        int maxi = 0;

        maxi = max(maxi, max(a, b));
        maxi = max(maxi, max(c, d));

        cout << maxi << endl;
    }

    return 0;
}