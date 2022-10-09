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
        int n, Y = 0, N = 0, I = 0;
        cin >> n;
        char arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 'Y')
                Y++;

            else if (arr[i] == 'N')
                N++;

            else if (arr[i] == 'I')
                I++;
        }

        if (I > 0)
            cout << "INDIAN" << endl;

        else if (I == 0)
        {
            if (Y > 0)
                cout << "NOT INDIAN" << endl;

            else if (Y == 0)
                cout << "NOT SURE" << endl;
        }
    }

    return 0;
}