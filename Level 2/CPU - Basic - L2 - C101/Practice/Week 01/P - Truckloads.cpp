#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll solve(ll n,ll x)
{
    if(n<=x) return 1;
    return solve(n/2,x)+solve((n+1)/2,x);
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,x;while(cin>>n>>x)
    {
        cout<<solve(n,x)<<'\n';
    }
    return 0;
}
