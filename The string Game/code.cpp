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
        map<char, int> k;
        string s;
        cin >> num;
        cin >> s;

        int temp = 1;
        if ((s.length()) % 2 == 1)
            cout << "NO" << endl;
        else
        {
            for (int i = 0; i < s.length(); i++)
            {
                k[s[i]] += 1;
            }
            for (auto i : k)
            {
                if (i.second % 2)
                {
                    temp = 0;
                    cout << "NO" << endl;
                    break;
                }
            }

            if (temp)
                cout << "YES" << endl;
        }
    }
    return 0;
}