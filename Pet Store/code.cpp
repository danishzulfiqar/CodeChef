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
        map<int, int> mapi;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mapi[v[i]]++;
        }

        int flag = 1;

        for (auto it : mapi)
        {
            if (it.second % 2 != 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag)
            cout << "Yes" << endl;

        else
            cout << "No" << endl;
    }

    return 0;
}