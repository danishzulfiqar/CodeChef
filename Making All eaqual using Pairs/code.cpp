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

        int counter = 0;

        for (int i = 0; i < n; i++)
        {
            counter = max(counter, frq[arr[i]]);
        }

        cout << n - counter << endl;
    }
    return 0;
}
