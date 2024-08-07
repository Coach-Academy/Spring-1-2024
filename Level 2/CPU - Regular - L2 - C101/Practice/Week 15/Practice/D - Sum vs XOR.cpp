#include<bits/stdc++.h>
using namespace std;
#define ll long long
int zero(ll n)
{
    int ret=0;
    while(n>0)
    {
        ret+=(n&1)==0;
        n/=2;
    }
    return ret;
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n;cin>>n;
    cout<<(1LL<<zero(n));
    return 0;
}
