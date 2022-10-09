#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int test;
    cin >> test;
    while (test--)
    {
        int num, counter = 0;
        cin >> num;
        string str;
        cin >> str;

        for (int i = 0; i < num; i++)
        {
            counter += 1;
            if (str[i + 1] == '1')
            {
                break;
            }
        }

        cout << counter << "\n";
    }
    return 0;
}