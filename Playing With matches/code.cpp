#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int Ref[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    int t;
    cin >> t;

    while (t--)
    {
        int first, second, matches = 0;
        cin >> first >> second;

        int sum = first + second;

        while (sum > 0)
        {
            int digit = sum % 10;
            matches += Ref[digit];
            sum /= 10;
        }

        cout<<matches<<endl;
    }

    return 0;
}