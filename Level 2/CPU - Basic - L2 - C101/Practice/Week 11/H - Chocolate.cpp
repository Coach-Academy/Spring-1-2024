#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    int s[n],sum=0;vector<ll>ones;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        sum+=s[i];
        if(s[i])
        {
            ones.push_back(i);
        }
    }
    if(sum==0)
    {
        cout<<0;
    }
    else if(sum==1)
    {
        cout<<1;
    }
    else
    {
        ll ans=1;
        for(int i=1;i<ones.size();i++)
        {
            ll zer=ones[i]-ones[i-1];
            ans*=zer;
        }
        cout<<ans;
    }
    return 0;
}
