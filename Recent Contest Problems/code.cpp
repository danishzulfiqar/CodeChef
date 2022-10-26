#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, counter = 0;
        cin >> n;
        char contest[n][10];

        for (int i = 0; i < n; i++)
        {
            cin >> contest[i];

            if (!(strcmp(contest[i], "START38")))
            {
                counter++;
            }
        }

        cout << counter << " " << n - counter << endl;
    }

    return 0;
}