#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        ll l,r;cin>>l>>r;
        for(int i=0;i<63;i++)
        {
            if((l>>i)&1) continue;
            if(l+(1LL<<i)<=r)
            {
                l+=(1LL<<i);
            }
            else
            {
                break;
            }
        }
        cout<<l<<'\n';
    }
    return 0;
}
