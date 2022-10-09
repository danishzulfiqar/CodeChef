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
        int x, y;
        cin >> x >> y;
        int slices = x * y;

        if (slices > 4)
        {
            if (slices % 4 == 0)
            cout << slices / 4 << endl;

            else
            cout<<(slices/4)+1<<endl;
        }

        else
        cout<<1<<endl;
    }
    return 0;
}