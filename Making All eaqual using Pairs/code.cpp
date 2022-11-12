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
        int frq[1001] = {0};

        int counter = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            frq[arr[i]] += 1;
            counter = max(counter, frq[arr[i]]);
        }

        cout << n - counter << endl;
    }
    return 0;
}
