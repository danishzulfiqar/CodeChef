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
        int n, m;
        cin >> n >> m;

        if (n <= m && (m % n) == 0)
            cout << "Yes" << endl;

        else
            cout << "No" << endl;
    }
    return 0;
}