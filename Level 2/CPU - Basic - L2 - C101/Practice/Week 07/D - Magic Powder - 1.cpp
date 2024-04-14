#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+5;
ll n,k,s[N],f[N];
bool can(ll mid)
{
    ll cnt=k;
    for(int i=0;i<n;i++)
    {
        ll need=mid*s[i];
        if(f[i]>=need) continue;
        cnt-=need-f[i];
    }
    return cnt>=0;
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>f[i];
    }
    ll l=1,r=1e10,ans=0;
    while(l<=r)
    {
        ll mid=l+r>>1;
        if(can(mid))
        {
            ans=mid;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    cout<<ans<<'\n';
    return 0;
}
