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
        int total, first, second, third;
        cin >> total >> first >> second >> third;

        int used = first + second;

        if (total - used >= third)
            cout << "0" << endl;

        else
        {
            if ((total - (used - first)) >= third)
                cout << "1" << endl;

            else if ((total - (used - second)) >= third)
                cout << "1" << endl;

            else
                cout << "2" << endl;
        }
    }

    return 0;
}