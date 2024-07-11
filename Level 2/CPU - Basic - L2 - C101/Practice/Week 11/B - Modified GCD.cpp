#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>divisors(ll n)
{
    vector<ll>arr;
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            arr.push_back(i);
            if(i*i!=n)
            {
                arr.push_back(n/i);
            }
        }
    }
    return arr;
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll a,b;cin>>a>>b;
    ll g=__gcd(a,b);
    vector<ll>d=divisors(g);
    sort(d.begin(),d.end());
    int q;cin>>q;while(q--)
    {
        int l,r;cin>>l>>r;
        auto it=upper_bound(d.begin(),d.end(),r);
        if(it!=d.begin())
        {
            --it;
            if(*it>=l)
            {
                cout<<*it<<'\n';
                continue;
            }
        }
        cout<<-1<<'\n';
    }
    return 0;
}
