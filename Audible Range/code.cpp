#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        if (x >= 67 && x <= 45000)
            cout << "Yes" << endl;

        else
            cout << "No" << endl;
    }

    return 0;
}