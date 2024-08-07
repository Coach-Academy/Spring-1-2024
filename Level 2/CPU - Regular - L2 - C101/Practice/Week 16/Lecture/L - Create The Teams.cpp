#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        ll n,x;cin>>n>>x;
        ll s[n];
        for(auto &it:s)
        {
            cin>>it;
        }
        sort(s,s+n,greater<ll>());
        ll ans=0,cnt=0;
        for(int i=0;i<n;i++)
        {
            cnt++;
            if(s[i]*cnt>=x)
            {
                ans++;
                cnt=0;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}
