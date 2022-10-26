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
        int x, y, counter = 0;
        cin >> x >> y;

        for (int i = x; i <= y; i++)
        {
            if ((i % 10) == 2 || (i % 10) == 3 || (i % 10) == 9)
            {
                counter++;
            }
        }

        cout << counter << endl;
    }
    return 0;
}