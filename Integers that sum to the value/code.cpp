#include <bits/stdc++.h>
using namespace std;

int main()
{

    int x;

    cin >> x;

    int total = 0, flag = 1;

    for (int i = 1; i < x; i++)
    {
        for (int j = 1; j < x; j++)
        {

            if (i == j && i + j == x)
            {
                {
                    if (flag)
                    {
                        total++;
                    }
                }
            }

            else if (i + j == x)
            {
                total++;
            }
        }
    }

    cout << total << endl;

    return 0;
}