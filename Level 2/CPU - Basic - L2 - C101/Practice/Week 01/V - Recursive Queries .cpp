#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll f(ll n)
{
    ll ret=1;
    while(n)
    {
        ll idx=n%10;
        n/=10;
        if(idx!=0)
        {
            ret*=idx;
        }
    }
    return ret;
}
ll g(ll n)
{
    if(n<10) return n;
    return g(f(n));
}
vector<int>index[10];
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    for(int i=1;i<=1e6;i++)
    {
        ll gg=g(i);
        if(gg<=9)
        {
            index[gg].push_back(i);
        }
    }
    int q;cin>>q;while(q--)
    {
        int l,r,x;cin>>l>>r>>x;
        cout<<upper_bound(index[x].begin(),index[x].end(),r)- lower_bound(index[x].begin(),index[x].end(),l)<<'\n';
    }
    return 0;
}
