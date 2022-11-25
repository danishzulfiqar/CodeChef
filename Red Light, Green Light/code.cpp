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
        int n, max, counter=0;
        cin >> n >> max;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            if (arr[i] > max)
            {
                counter++;
            }
        }

        cout << counter << endl;
    }

    return 0;
}
