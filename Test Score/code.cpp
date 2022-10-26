#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        int n, x, y, flag = 1;
        cin >> n >> x >> y;

        for (int i = 0; i <= n; i++)
        {
            if ((x * i) == y)
            {
                cout << "Yes" << endl;
                flag = 0;
                break;
            }
        }

        if (flag)
            cout << "No" << endl;
    }
    return 0;
}