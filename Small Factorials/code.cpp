#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        int fact = 1, num;
        cin >> num;

        for (int i = 1; i <= num; i++)
        {
            fact *= i;
        }

        cout << fact << endl;
    }

    return 0;
}