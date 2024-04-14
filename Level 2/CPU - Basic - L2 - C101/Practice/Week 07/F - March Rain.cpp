#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+5;
unsigned ll n,k,s[N],f[N];
bool can(ll mid)
{
    ll cnt=k-1,last=s[0]+mid-1;
    for(int i=1;i<n;i++)
    {
        if(s[i]<=last) continue;
        last=s[i]+mid-1;
        cnt--;
    }
    return cnt>=0;
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        sort(s,s+n);
        ll l=1,r=2e9,ans=0;
        while(l<=r)
        {
            ll mid=l+r>>1;
            if(can(mid))
            {
                ans=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}
