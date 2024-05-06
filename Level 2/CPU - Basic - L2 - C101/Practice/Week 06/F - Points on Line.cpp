#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll nC2(ll n)
{
    return n*(n-1)/2;
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,d;cin>>n>>d;
    ll s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    ll l=0,r=0,ans=0;
    while(l<n)
    {
        while(r<n&&s[r]-s[l]<=d)
        {
            r++;
        }
//        cout<<l<<' '<<r<<'\n';
        ans+=max(0LL,nC2(r-l-1));
        l++;
    }
    cout<<ans;
    return 0;
}
