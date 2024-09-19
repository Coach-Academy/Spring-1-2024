#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    map<int,int>frq;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        frq[x]++;
    }
    int ans=INT_MAX;
    for(auto[val,frquancy]:frq)
    {
        ans=min(ans,n-frquancy);
    }
    cout<<ans;
    return 0;
}
