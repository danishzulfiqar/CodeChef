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
        long long num;
        cin >> num;

        string str;
        cin >> str;

        bool flag = 1;

        if (num == 1)
        {
            cout << "Yes" << endl;
            flag = 0;
        }

        for (int i = 0; i < num and flag; i++)
        {
            if (str[i] == '1')
            {
                int c = 0;
                while (str[i] == '1')
                {
                    c++;
                    i++;
                    if (i == num)
                    {
                        if (c % 2 != 0)
                        {
                            cout << "No" << endl;
                            flag = 0;
                            break;
                        }
                    }
                }
                if (c % 2 != 0 and flag)
                {
                    cout << "No" << endl;
                    flag = 0;
                    break;
                }
            }
        }
        if (flag)
        {
            cout << "Yes" << endl;
        }
    }

    return 0;
}