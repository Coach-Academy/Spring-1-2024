#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        ll n;cin>>n;
        ll lc=1;
        for(int i=1;i<=n;i++)
        {
            lc=lcm(lc,i);
        }
        cout<<lc<<'\n';
    }
    return 0;
}
