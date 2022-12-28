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
        int num, low = 0, maxi = 0, sum = 1;
        string arr, r = "";
        unordered_set<string> s;

        cin >> num;
        cin >> arr;
        r = arr[0];

        for (int i = 1; i < num; i++)
        {
            if (arr[i - 1] != arr[i])
            {
                if (maxi < sum)
                {
                    maxi = sum;
                    maxi--;
                }
                if (s.find(r) != s.end())
                {
                    low = max(low, sum);
                }
                s.insert(r);
                r = arr[i];
                sum = 1;
            }
            else
            {
                sum++;
                r += arr[i];
            }
        }
        if (s.find(r) != s.end())
        {
            low = max(low, sum);
        }
        else
        {
            if (maxi < sum)
            {
                maxi = sum;
                maxi--;
            }
        }
        int ans = max(low, maxi);
        cout << ans << endl;
    }
    return 0;
}