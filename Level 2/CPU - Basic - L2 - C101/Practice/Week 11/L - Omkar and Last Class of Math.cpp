#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll div(ll n)
{
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return i;
        }
    }
    return n;
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        ll n;cin>>n;
        cout<<n/div(n)<<' '<<n-(n/div(n))<<'\n';
    }
    return 0;
}
