#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n;cin>>n;
    map<int,ll>m;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        m[x]++;
    }
    if(m.size()==1)
    {
        cout<<0<<' '<<n*(n-1)/2<<'\n';
    }
    else
    {
        auto[a,b]=*m.begin();
        auto[x,y]=*m.rbegin();
        cout<<x-a<<' '<<b*y<<'\n';
    }
    return 0;
}
