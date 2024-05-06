#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,l,r,x;cin>>n>>l>>r>>x;
    int s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int ans=0;
    for(int mask=0;mask<(1<<n);mask++)
    {
        if(__builtin_popcount(mask)<2) continue;
        int sum=0,mx=0,mn=1e9;
        for(int i=0;i<n;i++)
        {
            if((mask>>i)&1)
            {
                mx=max(mx,s[i]);
                mn=min(mn,s[i]);
                sum+=s[i];
            }
        }
        if(sum>=l&&sum<=r&&mx-mn>=x)
        {
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
