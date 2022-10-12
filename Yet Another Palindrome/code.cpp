#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int r=0;r<t;r++)
	{
	    int n;
	    cin >> n;
	    int* a=new int[n];
	    for(int i=0;i<n;i++)
	        cin >> a[i];
	    int* d=new int[n/2];
	    bool flag=true;
	    for(int i=0;i<n/2 && flag;i++)
	    {
	        if(a[n-i-1]<a[i])
	            flag=false;
	        else
	        {
	            d[i]=(a[n-i-1]-a[i]);
	            if(i!=0 && d[i-1]<d[i])
	                flag=false;
	        }
	    }
	    if(flag)
	        cout << a[n-1]-a[0] << "\n";
	    else
	        cout << "-1\n";
	}
	return 0;
}