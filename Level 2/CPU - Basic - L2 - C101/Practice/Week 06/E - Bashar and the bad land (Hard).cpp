#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,target;cin>>n>>target;
    ll s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    ll l=0,r=0,ans=INT_MAX,sum=0;
    while(l<n)
    {
        while(r<n&&sum<target)
        {
            sum+=s[r++];
        }
        if(sum>=target)
        {
            ans=min(ans,r-l);
        }
        sum-=s[l++];
    }
    if(ans==INT_MAX)
    {
        ans=-1;
    }
    cout<<ans;
    return 0;
}
