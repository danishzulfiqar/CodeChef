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
        int n, cnt = 0, maxi = 0;
        cin >> n;

        int arr[2][n];

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[0][i] == 0 || arr[1][i] == 0)
            {
                cnt = 0;
            }

            else 
            {
                cnt++;
                maxi = max(maxi, cnt);
            }
        }

        cout << maxi << endl;
    }

    return 0;
}