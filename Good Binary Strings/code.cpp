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
        int a = 0, b = 0, c = 0;
        int x, y;
        string s;

        cin >> s;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1' && s[i + 1] == '0')
                a += 1;
            else if (s[i] == '0' && s[i + 1] == '1')
                b += 1;
        }
        
        x = a;

        y = b;

        for (int i = 0; i < s.size(); i++)
        {
            a = x;
            b = y;
            if (s[i] == '1')
            {
                if (i == 0)
                {
                    if (s[i + 1] == '0')
                        a -= 1;
                    else
                        b += 1;
                }
                else if (i == s.size() - 1)
                {
                    if (s[i - 1] == '0')
                        b -= 1;
                    else
                        a += 1;
                }
                else
                {
                    if (s[i - 1] == '0')
                        b -= 1;
                    else
                        a += 1;
                    if (s[i + 1] == '0')
                        a--;
                    else
                        b += 1;
                }
            }
            else
            {
                if (i == 0)
                {
                    if (s[i + 1] == '1')
                        b -= 1;
                    else
                        a += 1;
                }
                else if (i == s.size() - 1)
                {
                    if (s[i - 1] == '1')
                        a -= 1;
                    else
                        b += 1;
                }
                else
                {
                    if (s[i + 1] == '1')
                        b -= 1;
                    else
                        a += 1;
                    if (s[i - 1] == '1')
                        a -= 1;
                    else
                        b += 1;
                }
            }
            if (a == b)
                c += 1;
        }
        cout << c << endl;
    }
    return 0;
}
