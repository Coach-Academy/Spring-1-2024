#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        int n;cin>>n;
        ll mx=-2e9,sum=0;
        for(int i=0;i<n;i++)
        {
            ll x;cin>>x;
            mx=max(mx,x);
            sum+=x;
        }
        cout<<fixed<<setprecision(6)<<mx+(sum-mx)*1.0/(n-1)<<'\n';
    }
    return 0;
}
