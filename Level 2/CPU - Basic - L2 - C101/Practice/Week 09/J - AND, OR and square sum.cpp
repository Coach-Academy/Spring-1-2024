#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    int s[n],f[20]={};
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        for(int o=0;o<20;o++)
        {
            f[o]+=(s[i]>>o)&1;
        }
    }
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ll x=0;
        for(int o=0;o<20;o++)
        {
            if(f[o])
            {
                f[o]--;
                x+=(1<<o);
            }
        }
        ans+=x*x;
    }
    cout<<ans;
    return 0;
}
