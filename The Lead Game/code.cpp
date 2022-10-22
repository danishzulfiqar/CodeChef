#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int g;
    cin >> g;

    int arr[g][2] = {0};
    int max_lead = 0, index = -1, x = 0, y = 0;

    for (int i = 0; i < g; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
        x += arr[i][0];
        y += arr[i][1];

        int diff = abs(x - y);

        if (max_lead < diff)
        {
            max_lead = diff;

            if ((arr[i][0]) > (arr[i][1]))
            {
                index = 1;
            }

            else
                index = 2;
        }
    }

    cout << index << " " << max_lead << endl;

    return 0;
}