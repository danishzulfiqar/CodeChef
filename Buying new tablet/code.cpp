#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int test_cases;
    cin >> test_cases;

    while (test_cases--)
    {
        int t, price;
        cin >> t >> price;

        int arr[t][3], maxi = 0;

        for (int i = 0; i < t; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> arr[i][j];
            }

            if (arr[i][2] > price)
            {
                continue;
            }

            else if (arr[i][2] <= price)
            {
                maxi = max(maxi, arr[i][0] * arr[i][1]);
            }
        }

        if (maxi == 0)
        {
            cout << "no tablet" << endl;
        }

        else
            cout << maxi << endl;
    }

    return 0;
}