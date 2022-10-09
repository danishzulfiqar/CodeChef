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
        float a, b, x, y;
        cin >> a >> b >> x >> y;

        float chef = a / x, chefina = b / y;

        if (chef < chefina)
            cout << "Chef" << endl;

        else if (chefina < chef)
            cout << "Chefina" << endl;

        else
            cout << "Both" << endl;
    }
    return 0;
}