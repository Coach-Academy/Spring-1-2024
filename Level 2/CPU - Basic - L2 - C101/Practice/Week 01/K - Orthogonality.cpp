#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    ll s[n];
    for(auto&it:s)
    {
        cin>>it;
    }
    ll f[n];
    for(auto&it:f)
    {
        cin>>it;
    }
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=s[i]*f[i];
    }
    if(sum==0)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}
