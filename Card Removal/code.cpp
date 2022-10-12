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
        int arr[num];
        
        map<int, int> my;

        int i = 0;
        while (i < num)
        {
            cin >> arr[i];
            my[arr[i]]++;
            i++;
        }

        int max_val = 0;

        i = 0;

        while (i < num)
        {
            if (max_val < my[arr[i]])
                max_val = my[arr[i]];
            i++;
        }

        cout << num - max_val << endl;
    }
    return 0;
}