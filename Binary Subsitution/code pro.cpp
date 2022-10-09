#include <bits/stdc++.h>
using namespace std;

int func_to_solve(int, string &, vector<int> &, map<string, string> &, string, set<string> &, int);
int solution();

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        solution();
    }

    return 0;
}

int func_to_solve(int i, string &s, vector<int> &d, map<string, string> &har, string c, set<string> &di, int m)
{
    if (i < 0)
    {
        auto it = di.find(c);
        if (it == di.end())
        {
            di.insert(c);
            return 1;
        }
        return 0;
    }

    if (d[i] != -1)
    {
        return d[i];
    }

    int t_one = func_to_solve(i - 1, s, d, har, har[s.substr(i, 1) + c], di, m);
    int t_two = 0;
    if (i - 1 >= 0 && har.find(s.substr(i - 1, 2)) != har.end())
        t_two = func_to_solve(i - 2, s, d, har, har[s.substr(i - 1, 2)] + c, di, m);
    return d[i] = (t_one + t_two) % 998244353;
}

int solution()
{
    string str;
    cin >> str;
    num = str.length();
    vector<int> d(num, -1);
    map<string, string> h{{"a", "01"}, {"b", "10"}, {"ab", "010"}, {"ba", "101"}};
    set<string> di;
    cout << func_to_solve(num - 1, str, d, h, "", di, 998244353) << endl;
    return 0;
}