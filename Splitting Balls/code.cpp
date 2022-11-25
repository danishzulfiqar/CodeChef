#include <bits/stdc++.h>
using namespace std;

long long MD = 10000000007;
long long arr[1000001];

void fact()
{
    arr[0] = 0;
    arr[1] = 1;

    for (long long j = 2; j <= 1000000; j++)
    {
        arr[j] = (j * (arr[j - 1]) % MD) % MD;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    fact();

    int t;
    cin >> t;

    while (t--)
    {
        long long NB;
        cin >> NB;
        long long s = 0;
        map<long long, long long> mp;

        for (long long i = 0; i < NB; i++)
        {

            int k;
            cin >> k;
            mp[k]++;
        }

        for (auto trav : mp)
        {
            s = (s + (arr[trav.first] * trav.second) % MD) % MD;
        }

        cout << s << endl;
    }
    return 0;
}
