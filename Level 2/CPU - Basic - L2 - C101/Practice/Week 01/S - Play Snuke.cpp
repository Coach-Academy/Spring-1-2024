#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    ll ans=LLONG_MAX;
    for(int i=0;i<n;i++)
    {
        ll a,b,c;cin>>a>>b>>c;
        if(c>a)
        {
            ans=min(ans,b);
        }
    }
    if(ans==LLONG_MAX) ans=-1;
    cout<<ans;
    return 0;
}
