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
        int n;
        cin >> n;

        string str;
        cin >> str;

        string str2 = str;

        reverse(str.begin(), str.end());

        vector<vector<int>> v(n + 1, vector<int>(n + 1, 0));

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (str2[i - 1] == str[j - 1])
                    v[i][j] = 1 + v[i - 1][j - 1];

                else
                    v[i][j] = max(v[i - 1][j], v[i][j - 1]);
            }
        }

        cout << v[n][n] / 2 << endl;
    }

    return 0;
}