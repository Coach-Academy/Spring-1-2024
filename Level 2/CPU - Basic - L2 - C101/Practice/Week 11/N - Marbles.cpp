#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll nCr(ll n,ll r)
{
    ll ret=1;
    for(ll i=r+1;i<=n;i++)
    {
        ret*=i;
        ret/=(i-r);
    }
    return ret;
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        ll n,r;cin>>n>>r;
        cout<<nCr(n-1,r-1)<<'\n';
    }
    return 0;
}
