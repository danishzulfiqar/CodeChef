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
        cin >> num;
        vector<int> x(num);

        for (int i = 0; i < num; i++)
        {
            cin >> x[i];
        }
        map<int, int> k;

        for (int i = 0; i < num; i++)
        {
            k[x[i]]++;
        }

        int m = num;

        for (auto &i : k)
        {
            int v = 0;
            if (i.first & 1)
                v = i.first - 1;

            else
                v = i.first + 1;

            int answer = i.second;
            auto it = k.find(v);
            if (it != k.end())
                answer += k[v];

            if (num - answer < m)
                m = num - answer;
        }

        cout << m << endl;
    }

    return 0;
}