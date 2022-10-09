#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace chrono;
using namespace __gnu_pbds;

template<class T> using ordered_set=tree<T,null_type,greater_eaqual<T>,rb_tree_tag,tree_order_statistics_node_update>;

#define int long long

void solve(){
    int n;
    cin>>n;
   
    vector<int> arr(n);

    for(int i=0;i<n;i++)
    cin>>arr[i];

    int totalNeg=0;
    bool Zero=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]<0) totalNeg++;
        if(arr[i]==0){
            Zero=1;
            break;
        }
        
    }

    if(Zero)
    {
        cout<<0<<endl;
        return;
    }

    if(totalNeg%2==0)
    {
        cout<<0<<endl;
        return;
    }

    cout<<1<<endl;
    return; 
}

signed main(){
    int tc=1;
    cin>>tc;

    for(int i=1;i<=tc;i++)
    {
        solve();
    }

    return 0;
}