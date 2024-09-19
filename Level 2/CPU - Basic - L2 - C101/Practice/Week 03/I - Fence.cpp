#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k;cin>>n>>k;
    ll s[n+1]={};
    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
        s[i]+=s[i-1];
    }
    ll ans=0,mn=1e10;
    for(int i=1;i+k-1<=n;i++)
    {
        ll sum=s[i+k-1]-s[i-1];
        if(sum<mn)
        {
            mn=sum;
            ans=i;
        }
    }
    cout<<ans;
    return 0;
}
