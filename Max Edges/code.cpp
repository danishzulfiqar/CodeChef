#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long v, s, sk;
        cin >> v >> s >> sk;
        long long answer = 0;
        if (s + sk <= v)
        {
            long long e = v - (s + sk);
            answer += s * (e + sk);
            answer += (e * sk);
            answer += (e * (e - 1)) / 2;
        }
        else
        {
            long long extra = (s + sk) - v;
            s = s - extra;
            sk = sk - extra;
            extra = 0;
            answer += s * (extra + sk);
            answer += (extra * sk);
            answer += extra * (extra + 1) / 2;
        }
        cout << answer << endl;
    }
    return 0;
}