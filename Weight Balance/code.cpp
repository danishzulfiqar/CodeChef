#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_cases;
    cin >> test_cases;

    while (test_cases--)
    {
        int w1, w2, x1, x2, m;
        cin >> w1 >> w2 >> x1 >> x2 >> m;

        int m1 = x1 * m, m2 = x2 * m;

        if (w2 - w1 >= m1 && w2 - w1 <= m2)
            cout << 1 << endl;

        else
            cout << 0 << endl;
    }

    return 0;
}