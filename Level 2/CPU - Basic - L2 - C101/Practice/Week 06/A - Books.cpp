#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,t;cin>>n>>t;
    ll s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    ll l=0,r=0,ans=0,sum=0;
    while(l<n)
    {
        while(r<n&&sum+s[r]<=t)
        {
            sum+=s[r];
            r++;
        }
        ans=max(ans,r-l);
        sum-=s[l];
        l++;
    }
    cout<<ans;
    return 0;
}
