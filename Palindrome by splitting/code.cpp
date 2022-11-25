#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int num, smaller = 0, counter = 0;
        cin >> num;
        int greater = num - 1;
        int Array[num];

        for (int i = 0; i < num; i++)
        {
            cin >> Array[i];
        }

        while (smaller < greater)
        {

            if (Array[smaller] == Array[greater])
                smaller += 1, greater -= 1;

            else if (Array[smaller] > Array[greater])
            {
                Array[smaller] = Array[smaller] - Array[greater];
                greater -= 1;
                counter += 1;
            }
            else
            {
                Array[greater] = Array[greater] - Array[smaller];

                smaller += 1;
                counter += 1;
            }
        }
        cout << counter << endl;
    }

    return 0;
}