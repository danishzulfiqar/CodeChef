#include <iostream>
#include <cstdio>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int score;
    cin >> score;

    if (score <= 50)
        cout << "100" << endl;

    else if (score > 50 && score <= 100)
        cout << "50" << endl;

    else
        cout << "0" << endl;

    return 0;
}