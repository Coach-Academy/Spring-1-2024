#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n;cin>>n;
    ll sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
        if(sum>=n)
        {
            cout<<i;
            return 0;
        }
    }
    return 0;
}
