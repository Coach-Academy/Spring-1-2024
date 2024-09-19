#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m;
ll solve(ll x=n)
{
    if(x>m) return 1e10;
    if(x==m) return 0;
    return min(solve(x*2),solve(x*3))+1;
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>m;
    ll ans=solve();
    if(ans>=1e10) ans=-1;
    cout<<ans;
    return 0;
}
