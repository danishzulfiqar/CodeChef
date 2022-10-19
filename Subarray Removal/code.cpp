#include <bits/stdc++.h>
#define int long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int num = 0, str = 0, k = 0, s0 = 0, s1 = 0, s2 = 0;

    int t;
    cin >> t;

    while (t--)
    {
        cin >> num;
        str = s0 = s1 = 0;

        for (int i = 1; i <= num; ++i)
        {
            cin >> k;
            s0 += (k == 0);
            s1 += (k == 1);
            s2 = min(s0, s1);
            s0 -= s2;
            s1 -= s2;
            str += s2;
        }

        cout << str + s1 / 3 << endl;
    }

    return 0;
}
