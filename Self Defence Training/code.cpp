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
        int n, count = 0;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            if (arr[i] >= 10 && arr[i] <= 60)
                count++;
        }

        cout << count << endl;
    }

    return 0;
}