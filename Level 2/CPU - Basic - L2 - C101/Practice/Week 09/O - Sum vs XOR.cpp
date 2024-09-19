#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n;cin>>n;
    int z=0;
    for(int i=0;i<61;i++)
    {
        if((1LL<<i)>n) continue;
        if((n>>i)&1) continue;
        z++;
    }
    cout<<(1LL<<z);
    return 0;
}
