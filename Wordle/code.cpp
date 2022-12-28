#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        string str1, str2;
        cin >> str1 >> str2;

        for (int i = 0; i < str1.size(); i++)
        {
            if (str1[i] == str2[i])
                cout << "G";

            else
                cout << "B";
        }

        cout << endl;
    }

    return 0;
}