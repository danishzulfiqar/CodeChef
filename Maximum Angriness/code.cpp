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
        long long a, b;
        cin >> a >> b;

        long long num = (a * (a - 1)) / 2;

        if (b < a / 2)
        {
            long long k = a - 2 * b;
            num = num - (k * (k - 1)) / 2;
        }

        cout << num << endl;
    }

    return 0;
}