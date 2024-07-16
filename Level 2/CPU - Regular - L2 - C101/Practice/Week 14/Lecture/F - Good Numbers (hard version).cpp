#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        ll n;cin>>n;
        ll x=0;
        for(int i=0;i<=38&&x<n;i++)
        {
            x+=powl(3,i);
        }
        for(int i=38;i>=0;i--)
        {
            if(x-powl(3,i)>=n)
            {
                x-=powl(3,i);
            }
        }
        cout<<x<<'\n';
    }
    return 0;
}
