#include <bits/stdc++.h>
using namespace std;

int main()
{

    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        int arr_size, need;
        cin >> arr_size >> need;
        int arr[arr_size];

        int total = 0;
        bool flag = 1;

        for (int i = 0; i < arr_size; i++)
        {
            cin >> arr[i];

            total = total + arr[i];

            if (total < need)
            {
                cout << "No " << i + 1 << endl;
                flag = 0;
                break;
            }

            else
            {
                total = total - need;
            }
        }

        if (flag)
            cout << "YES" << endl;
    }

    return 0;
}