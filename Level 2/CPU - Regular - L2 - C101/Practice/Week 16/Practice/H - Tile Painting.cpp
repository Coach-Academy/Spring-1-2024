#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<pair<ll,ll>> primeFactorze(ll n)
{
    vector<pair<ll,ll>> arr;
    for(ll i=2;i*i<=n;i++)
    {
        int w=0;
        while(n%i==0)
        {
            w++;
            n/=i;
        }
        if(w)arr.push_back({i,w});
    }
    if(n>1)arr.push_back({n,1});
    return arr;
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n;cin>>n;
    vector<pair<ll,ll>>v=primeFactorze(n);
    if(v.size()==1)
    {
        cout<<v[0].first;
    }
    else
    {
        cout<<1;
    }
    return 0;
}
