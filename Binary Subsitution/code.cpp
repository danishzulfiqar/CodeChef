#include <bits/stdc++.h>
using namespace std;

// long long int func_to_solve(int index, string &s, vector<int> &dp, map<string, string> &hardcoded, string curr, set<string> &disset, long long int mod);

long long int func_to_solve(int, string &, vector<int> &, map<string, string> &, string , set<string> &, long long int);
long long int solve_the_solution();


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int test_case;
    cin >> test_case;
    while (test_case--)
    {
        solve_the_solution();
    }
    return 0;
}

long long int func_to_solve(int index, string &s, vector<int> &dp, map<string, string> &hardcoded, string curr, set<string> &disset, long long int mod)
{
    if (index < 0)
    {
        auto it = disset.find(curr);
        if (it == disset.end())
        {
            disset.insert(curr);
            return 1;
        }
        return 0;
    }

    if (dp[index] != -1)
        return dp[index];

    long long int takingone = func_to_solve(index - 1, s, dp, hardcoded, hardcoded[s.substr(index, 1) + curr], disset, mod);
    long long int takingtwo = 0;
    if (index - 1 >= 0 && hardcoded.find(s.substr(index - 1, 2)) != hardcoded.end())
        takingtwo = func_to_solve(index - 2, s, dp, hardcoded, hardcoded[s.substr(index - 1, 2)] + curr, disset, mod);
    return dp[index] = (takingone + takingtwo) % 998244353;
}

long long int solve_the_solution()
{
    string s;
    cin >> s;
    long long int n = s.length();
    vector<int> dp(n, -1);
    map<string, string> hardcoded{{"a", "01"}, {"b", "10"}, {"ab", "010"}, {"ba", "101"}};
    set<string> disset;
    cout << func_to_solve(n - 1, s, dp, hardcoded, "", disset, 998244353) << endl;
    return 0;
}