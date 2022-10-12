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
        int x, y;
        cin >> x >> y;
        int k = x / y;
        cout << k * k << endl;
    }
    return 0;
}
