#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        ll n,a,b;cin>>n>>a>>b;
        string ans="NO\n";
        for(ll x=1;x<=n;x*=a)
        {
            ll rem=n-x;
            if(rem%b==0)
            {
                ans="YES\n";
            }
            if(a==1) break;
        }
        cout<<ans;
    }
    return 0;
}
