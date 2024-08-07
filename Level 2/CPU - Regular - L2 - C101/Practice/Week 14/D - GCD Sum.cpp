#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll sod(ll n)
{
    ll ret=0;
    while(n)
    {
        ret+=n%10;
        n/=10;
    }
    return ret;
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        ll n;cin>>n;
        while(__gcd(n,sod(n))==1)
        {
            n++;
        }
        cout<<n<<'\n';
    }
    return 0;
}
