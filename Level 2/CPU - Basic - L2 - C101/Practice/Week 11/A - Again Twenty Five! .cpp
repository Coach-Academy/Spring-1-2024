#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=100;
ll powmod(ll x,ll y)
{
    ll res=1;
    x=x%mod;
    if(x==0) return 0;
    while(y>0)
    {
        if(y&1) res=(res*x)%mod;
        y=y>>1;
        x=(x*x)%mod;
    }
    return res;
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    cout<<powmod(5,n);
    return 0;
}
