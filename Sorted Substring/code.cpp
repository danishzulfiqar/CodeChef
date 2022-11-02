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
        int num, x = 0;
        string str;
        cin >> num >> str;
        for (int i = 1; i < num; ++i)
        {
            x += str[i] != str[i - 1];
        }
        cout << (x + (str[0] == 49)) / 2 << endl;
    }

    return 0;
}