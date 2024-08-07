#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        int n,m;cin>>n>>m;
        ll f[m]={};
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            f[x%m]++;
        }
//        for(auto it:f) cout<<it<<' ';
//        cout<<'\n';
        ll ans=0;  // 1 3     3 5    31313133
        for(int i=0;i<m;i++)
        {
            ll &a=f[i],&b=f[(m-i)%m];
            if(a>b) swap(a,b);
            if(a==0)
            {
                ans+=b;
                a=0,b=0;
                continue;
            }
            ans++;
//            cout<<a<<' '<<b<<'\n';
            b=max(0LL,b-(a+1));
            ans+=b;
            a=0,b=0;
//            cout<<ans<<'\n';
        }
        cout<<ans<<'\n';
    }
    return 0;
}
