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
        int n, maxi = 0;
        cin >> n;
        int arr[n];
        int frq[1000] = {0};

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            frq[arr[i]] += 1;
        }

        for (int i = 0; i <= 1000; i++)
        {
            if (maxi < frq[i])
            {
                maxi = i;
            }
        }

        int counter = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] != maxi)
            {
                counter++;
            }
        }

        cout << counter << endl;
    }
    return 0;
}