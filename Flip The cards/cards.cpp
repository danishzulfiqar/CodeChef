#include <iostream>
using namespace std;

void solve(){
    int n,x;
    cin>>n>>x;

    int y=n-x;

    cout<<min(x,y)<<endl;

    return;
}

signed main(){
    int tc=1;
    cin>>tc;

    for(int i=1;i<=tc;i++)
    {
        solve();
    }
}

    
