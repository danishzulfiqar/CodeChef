#include <iostream>
using namespace std;

int main()
{
    int test_cases;
    cin >> test_cases;

    while (test_cases--)
    {
        int x, y;
        cin >> x >> y;

        int i=0,xt=0,yt=0;

        while(i<=1000)
        {
            i=i+1;
            xt=xt+i;

            if(xt>x)
            {
                cout<<"Bob"<<endl;
                break;
            }

            i=i+1;

            yt=yt+i;

            if(yt>y)
            {
                cout<<"Limak"<<endl;
                break;
            }

        }
    }

    return 0;
}