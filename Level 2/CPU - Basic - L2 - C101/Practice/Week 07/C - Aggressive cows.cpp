#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+5;
ll n,c,s[N];
bool can(ll mid)
{
    ll last=s[0];
    ll k=c-1;
    for(int i=1;i<n;i++)
    {
        if(s[i]-last>=mid)
        {
            last=s[i];
            k--;
        }
    }
    return k<=0;
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        cin>>n>>c;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        sort(s,s+n);
        ll l=1,r=1e10,ans=1;
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
    }
    return 0;
}
