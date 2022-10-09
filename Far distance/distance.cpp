#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int test_case;

    cin >> test_case;

    while (test_case--)
    {
        int array_size, max_val;
        cin >> array_size >> max_val;

        int minus = 0, sum = 0;

        int st = 1, en = max_val;

        int arr[array_size];

        for (int i = 0; i < array_size; i++)
        {
            cin >> arr[i];
            int num = arr[i];

            if (abs(arr[i] - st) > abs(arr[i] - en))
            {
                minus = st;
            }

            else if (abs(arr[i] - st) < abs(arr[i] - en))
            {
                minus = en;
            }

            if (minus != 0)
            {
                sum = sum + abs(num - minus);
            }
        }

        cout << sum << endl;
    }

    return 0;
}