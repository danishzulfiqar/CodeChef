#include <bits/stdc++.h>
using namespace std;

int main()
{

    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        int number, c = 0;
        cin >> number;
        char s[number];
        cin >> s;

        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] == '1')
            {
                c += 1;
            }

            else
            {
                break;
            }
        }

        cout << c << "\n";
    }
    return 0;
}