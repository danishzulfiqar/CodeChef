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

        if (n % 5 != 0)
            cout << -1 << endl;

        else if (n % 10 == 0)
            cout << n / 10 << endl;

        else
            cout << n / 10 + 1 << endl;
    }

    return 0;
}