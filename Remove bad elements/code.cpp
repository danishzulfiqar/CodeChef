#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        unordered_map<int, int> freq;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }

        int m_f = INT_MIN;
        for (auto itr = freq.begin(); itr != freq.end(); itr++)
            m_f = max(m_f, itr->second);

        cout << n - m_f << endl;
    }
    
    return 0;
}