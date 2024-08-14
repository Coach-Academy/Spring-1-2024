#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        ll n;cin>>n;
        ll ans=0;
        for(int i=0;i<61;i++)
        {
            if((n>>i)&1) continue;
            if((1LL<<i)>n) continue;
            ans+=1LL<<i;
        }
        cout<<ans<<'\n';
    }
    return 0;
}
