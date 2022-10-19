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
        int x, y, z;

        cin >> x >> y >> z;

        if ((x + y) % 2 != 0)
        {
            cout << "Yes" << endl;
            continue;
        }

        else if ((x + z) % 2 != 0)
        {
            cout << "Yes" << endl;
            continue;
        }

        else if ((y + z) % 2 != 0)
        {
            cout << "Yes" << endl;
            continue;
        }

        else
        cout<<"NO"<<endl;
    }

    return 0;
}