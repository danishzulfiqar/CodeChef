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
        int num;
        string str1, str2;
        cin >> num;
        cin >> str1 >> str2;

        map<char, int> f, s;

        for (int i = 0; i < num; i++)
        {
            f[str1[i]]++;
            s[str2[i]]++;
        }

        int answer = 0;

        for (int i = 0; i < num; i++)
        {
            int t = 0, v = 0;
            if (f.find(str1[i]) != f.end())
                t = f[str1[i]];

            if (s.find(str1[i]) != s.end())
                v = s[str1[i]];

            int j = min(t, v);
            answer = max(answer, j);
        }

        cout << answer << endl;
    }
    return 0;
}