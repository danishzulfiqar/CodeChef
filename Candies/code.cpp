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
        int n, maxi = 0, flag = 0;
        cin >> n;
        n *= 2;
        int arr[n] = {0};
        int check[n] = {0};

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            check[i] = count(arr, arr + n, arr[i]);
            if (check[i] > 2)
            {
                flag = 1;
                break;
            }
        }

        if (flag)
        {
            cout << "No" << endl;
        }

        else
            cout << "Yes" << endl;
    }

    return 0;
}