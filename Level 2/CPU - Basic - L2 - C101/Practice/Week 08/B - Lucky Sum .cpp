#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll l,r;
set<ll>lucky;
void fill(ll x=0)
{
    if(x>r)
    {
        lucky.insert(x);
        return;
    }
    if(x>=l) lucky.insert(x);
    fill(x*10+4);
    fill(x*10+7);
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>l>>r;
    fill();
    ll ans=0;
    while(l<=r)
    {
        auto it=lucky.lower_bound(l);
        ans+=*it*(min(r,*it)-l+1);
        l=*it+1;
    }
    cout<<ans;
    return 0;
}
