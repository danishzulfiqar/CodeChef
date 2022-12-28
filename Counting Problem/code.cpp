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

        int arr[n], odd = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            if (arr[i] % 2 )
                odd++;
        }

        if (odd == 0 || odd % 2)
            cout << "No" << endl;

        else
            cout << "Yes" << endl;
    }

    return 0;
}