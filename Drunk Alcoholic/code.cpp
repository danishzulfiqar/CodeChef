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
        int x, counter = 0;
        cin >> x;

        for (int i = 1; i <= x; i++)
        {
            if (i % 2 != 0)
                counter += 3;

            else if (i % 2 == 0)
                counter -= 1;
        }

        cout << counter << endl;
    }
    return 0;
}