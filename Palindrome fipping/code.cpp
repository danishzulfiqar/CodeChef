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
        int num;
        cin >> num;
        string str;
        cin >> str;

        int f = 0, z = 0;
        int i = 0;

        while (i < num)
        {
            if (str[i] == '1')
                f++;

            else
                z++;

            i++;
        }

        if (num % 2==0)
        {
            if (f % 2 && z % 2)
                cout << "NO" << endl;

            else
                cout << "Yes" << endl;
        }

        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
