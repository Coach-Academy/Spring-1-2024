#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k;cin>>n>>k;
    ll s[n+1]={},sum=0,ans=0;
    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
    }
    for(int i=1;i<=n;i++)
    {
        bool x;cin>>x;
        if(x)
        {
            ans+=s[i];
            sum+=s[i];
            s[i]=0;
        }
        s[i]+=s[i-1];
    }
    for(int i=1;i+k-1<=n;i++)
    {
        ll add=s[i+k-1]-s[i-1];
        ans=max(ans,sum+add);
    }
    cout<<ans;
    return 0;
}
