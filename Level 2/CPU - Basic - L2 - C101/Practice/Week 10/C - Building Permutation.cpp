#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    ll s[n];
    for(int i=0;i<=n;i++)
    {
        cin>>s[i];
    }
    sort(s,s+n);
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=abs((i+1)-s[i]);
    }
    cout<<ans;
    return 0;
}
