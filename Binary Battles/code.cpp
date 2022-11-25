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
        int x, y, z, c = 0;
        cin >> x >> y >> z;

        c = log2(x);

        cout << c * y + (c - 1) * z << endl;
    }

    return 0;
}