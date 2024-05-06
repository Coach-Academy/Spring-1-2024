#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,r,avg;cin>>n>>r>>avg;
    pair<ll,ll>s[n];
    ll cur=0,sum=avg*n;
    for(int i=0;i<n;i++)
    {
        cin>>s[i].second>>s[i].first;
        cur+=s[i].second;
    }
    sort(s,s+n);
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        if(cur>=sum) break;
        if(r>s[i].second)
        {
            ll x=min(r-s[i].second,sum-cur);
            ans+=x*s[i].first;
            cur+=x;
        }
    }
    cout<<ans<<'\n';
    return 0;
}
