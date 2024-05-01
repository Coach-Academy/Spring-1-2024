#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int l,r;cin>>l>>r;
    int ans=0;
    for(int i=l;i<=r;i++)
    {
        for(int o=l;o<=r;o++)
        {
            ans=max(ans,i^o);
        }
    }
    cout<<ans;
    return 0;
}
