#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,s,d;cin>>n>>s>>d;
    for(int i=0;i<n;i++)
    {
        ll x,y;cin>>x>>y;
        if(x<s&&y>d)
        {
            cout<<"Yes\n";
            return 0;
        }
    }
    cout<<"No\n";
    return 0;
}
