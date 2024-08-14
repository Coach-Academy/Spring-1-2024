#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+5;
ll n,k,s[N];
bool can(ll mid)
{
    ll sum=0;
    for(int i=n/2;i<n;i++)
    {
        sum+=max(0LL,mid-s[i]);
        if(sum>k) return 0;
    }
    return sum<=k;
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    sort(s,s+n);
    ll l=s[n/2],r=1e16,ans=s[n/2];
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
    cout<<ans;
    return 0;
}
